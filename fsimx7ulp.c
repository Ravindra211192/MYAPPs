/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/sys_proto.h>
#include <asm/arch/mx7ulp-pins.h>
#include <asm/arch/iomux.h>
#include <asm/gpio.h>
#include <usb.h>
#include <dm.h>
#include <asm/mach-imx/video.h>
#include <mipi_dsi_northwest.h>
#include <imx_mipi_dsi_bridge.h>
#include <mipi_dsi_panel.h>
#include <i2c.h>

DECLARE_GLOBAL_DATA_PTR;

#define UART_PAD_CTRL	(PAD_CTL_PUS_UP)
#define QSPI_PAD_CTRL1	(PAD_CTL_PUS_UP | PAD_CTL_DSE)
#define OTG_ID_GPIO_PAD_CTRL	(PAD_CTL_IBE_ENABLE | PAD_CTL_PUS_UP | PAD_CTL_PUE)
#define PWR_GPIO_PAD_CTRL	(PAD_CTL_OBE_ENABLE | PAD_CTL_PUS_UP | PAD_CTL_PUE)
#define MIPI_GPIO_PAD_CTRL	(PAD_CTL_OBE_ENABLE)

int dram_init(void)
{
	gd->ram_size = PHYS_SDRAM_SIZE;

	return 0;
}

static iomux_cfg_t const lpuart4_pads[] = {
	MX7ULP_PAD_PTC3__LPUART4_RX | MUX_PAD_CTRL(UART_PAD_CTRL),
	MX7ULP_PAD_PTC2__LPUART4_TX | MUX_PAD_CTRL(UART_PAD_CTRL),
};

static void setup_iomux_uart(void)
{
	mx7ulp_iomux_setup_multiple_pads(lpuart4_pads,
					 ARRAY_SIZE(lpuart4_pads));
}

#ifdef CONFIG_FSL_QSPI
#ifndef CONFIG_DM_SPI
static iomux_cfg_t const quadspi_pads[] = {
	MX7ULP_PAD_PTB8__QSPIA_SS0_B | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
	MX7ULP_PAD_PTB15__QSPIA_SCLK  | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
	MX7ULP_PAD_PTB16__QSPIA_DATA3 | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
	MX7ULP_PAD_PTB17__QSPIA_DATA2 | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
	MX7ULP_PAD_PTB18__QSPIA_DATA1 | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
	MX7ULP_PAD_PTB19__QSPIA_DATA0 | MUX_PAD_CTRL(QSPI_PAD_CTRL1),
};
#endif

int board_qspi_init(void)
{
	u32 val;
#ifndef CONFIG_DM_SPI
	mx7ulp_iomux_setup_multiple_pads(quadspi_pads, ARRAY_SIZE(quadspi_pads));
#endif

	/* enable clock */
	val = readl(PCC1_RBASE + 0x94);

	if (!(val & 0x20000000)) {
		writel(0x03000003, (PCC1_RBASE + 0x94));
		writel(0x43000003, (PCC1_RBASE + 0x94));
	}
	return 0;
}
#endif
#ifndef CONFIG_DM_USB

#define USB_PWR_GPIO	IMX_GPIO_NR(5, 15)
#define USB_OTG_ID_GPIO	IMX_GPIO_NR(3, 13)

static iomux_cfg_t const usb_otg1_pads[] = {
	MX7ULP_PAD_PTC13__PTC13 | MUX_PAD_CTRL(OTG_ID_GPIO_PAD_CTRL),  /* gpio for OTG ID*/
	MX7ULP_PAD_PTE15__PTE15 | MUX_PAD_CTRL(PWR_GPIO_PAD_CTRL),  /* gpio for pwr */
};

static void setup_usb(void)
{
	mx7ulp_iomux_setup_multiple_pads(usb_otg1_pads,
		ARRAY_SIZE(usb_otg1_pads));
	gpio_request(USB_OTG_ID_GPIO, "otg_id");
	gpio_direction_input(USB_OTG_ID_GPIO);

	gpio_request(USB_PWR_GPIO, "otg_pwr");
	gpio_direction_output(USB_PWR_GPIO, 1);
}
#endif

int board_eth_init(bd_t *bis)
{
	int rc = 0;
#ifdef CONFIG_USB_ETHER
	rc = usb_eth_initialize(bis);
#endif
	return rc;
}

#ifndef CONFIG_DM_USB
int board_ehci_power(int port, int on)
{
	int pwr_pol = 1;	/* 0 = active high, 1 = active low */

	if (pwr_pol)
		on = !on;

	switch (port) {
	case 0:
		gpio_set_value(USB_PWR_GPIO, on);
		break;
	default:
		printf("MXC USB port %d not yet supported\n", port);
		return -EINVAL;
	}

	return 0;
}

int board_usb_phy_mode(int port)
{
	int ret = -1;

	if (port == 0) {
		ret = gpio_get_value(USB_OTG_ID_GPIO);
		if (ret)
			return USB_INIT_DEVICE;
		else
			return USB_INIT_HOST;
	}
	return USB_INIT_HOST;
}
#endif

int board_early_init_f(void)
{
	setup_iomux_uart();

	return 0;
}

static int sn65dsi84_i2c_reg_write(struct udevice *dev, uint addr, uint8_t *data, int length)
{
  int ret;
  
  ret = dm_i2c_write(dev, addr, data, length);
  return ret;
}

static int sn65dsi84_i2c_reg_read(struct udevice *dev, uint addr, uint8_t *data, int length)
{
  int err;
  
  err = dm_i2c_read(dev, addr, data, length);
  if (err)
  {
    printf("Errror!\n");
    return err;
  }

  return 0;
}

static int sn65dsi84_init(struct mipi_dsi_client_dev *panel_dev)
{
  struct udevice *bus =0, *mipi2lvds_dev=0;
  int i2c_bus =7;
  int ret;
  
  uint sn65_addr[] = {
      /* Reset and Clock Registers */
      0x09, 0x0A, 0x0B, 0x0D,
      /* DSI Registers */
      0x10, 0x11, 0x12, 0x13,
      /* LVDS Registers */
      0x18, 0x19, 0x1A, 0x1B,
      /* Video Registers */
      0x20, 0x21, 0x22, 0x23,
      0x24, 0x25, 0x26, 0x27, 
      0x28, 0x29, 0x2A, 0x2B,
      0x2C, 0x2D, 0x2E, 0x2F,
      0x30, 0x31, 0x32, 0x33,
      0x34, 0x35, 0x36, 0x37,
      0x38, 0x39, 0x3A, 0x3B,
      0x3C, 0x3D, 0x3E, 0x0D,
      };
      
  uint8_t sn65_values[] = {
      0x00, 0x01, 0x28, 0x00,
      0x36, 0x00, 0x20, 0x00,
      0x78, 0x00, 0x03, 0x00,
      0x40, 0x01, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
      0x21, 0x00, 0x00, 0x00,
      0x14, 0x00, 0x00, 0x00,
      0x0A, 0x00, 0x00, 0x00,
      0x30, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x01,
      };
  /* Bus detection*/
  ret = uclass_get_device_by_seq (UCLASS_I2C, i2c_bus, &bus);
  if (ret)
    {
      printf ("%s: No bus %d\n", __func__, i2c_bus);
      return 1;
    }
  
  /*I2C chip on the bus detection*/ 
  ret = dm_i2c_probe (bus, 0x2c, 0, &mipi2lvds_dev);
  if (ret)
    {
      printf ("%s: Can't find device id=0x%x, on bus %d, ret %d\n", __func__,
    		  0x2c, i2c_bus, ret);
      return 1;
    }
  
  /* offset */
  i2c_set_chip_offset_len (mipi2lvds_dev, 1);

  for(int i = 0;i<(sizeof(sn65_values)/sizeof(sn65_values[0]));i++){
    sn65dsi84_i2c_reg_write(mipi2lvds_dev, sn65_addr[i], &sn65_values[i], sizeof(sn65_values[i]));
    mdelay(10);
  }
  
  mdelay(10);
  
  /*Soft reset set */
  uint8_t val[1];
  val[0]=1;
  sn65dsi84_i2c_reg_write (mipi2lvds_dev, 0x9, &val[0], sizeof(val[0]));

  mdelay(10);
  uint8_t data[(sizeof(sn65_values)/sizeof(sn65_values[0]))];
  for(int i=0;i<(sizeof(sn65_values)/sizeof(sn65_values[0])); i++){
    sn65dsi84_i2c_reg_read(mipi2lvds_dev, sn65_addr[i], &data[i] , sizeof(sn65_values[i]));
    mdelay(10);
  }
  return 0;
}

static int sn65dsi84_lvds_init(struct mipi_dsi_client_dev *panel_dev){

	struct udevice *bus =0, *mipi2lvds_dev=0;
	int i2c_bus =7;
	int ret;

	uint sn65_addr[] = {
	      /* Reset and Clock Registers */
	      0x09, 0x0A, 0x0B, 0x0D,
	      /* DSI Registers */
	      0x10, 0x11, 0x12, 0x13,
	      /* LVDS Registers */
	      0x18, 0x19, 0x1A, 0x1B,
	      /* Video Registers */
	      0x20, 0x21, 0x22, 0x23,
	      0x24, 0x25, 0x26, 0x27,
	      0x28, 0x29, 0x2A, 0x2B,
	      0x2C, 0x2D, 0x2E, 0x2F,
	      0x30, 0x31, 0x32, 0x33,
	      0x34, 0x35, 0x36, 0x37,
	      0x38, 0x39, 0x3A, 0x3B,
	      0x3C, 0x3D, 0x3E, 0x0D,
	      };

	uint8_t sn65_values[] = {
	      0x00, 0x01, 0x28, 0x00,
	      0x36, 0x00, 0x28, 0x00,
	      /*LVDS registers*/
	      0x78, 0x00, 0x03, 0x00,
	      /*video registers*/
	      0x20, 0x03, 0x00, 0x00,
	      0x00, 0x00, 0x00, 0x00,
	      0x21, 0x00, 0x00, 0x00,
	      /*horiz. sync len*/
	      0x14, 0x00, 0x00, 0x00,
	      /*verti. sync len */
	      0x02, 0x00, 0x00, 0x00,
	      /*horiz. back porch*/
	      0x30, 0x00, 0x00, 0x00,
	      0x00, 0x00, 0x00, 0x00,
	      0x00, 0x00, 0x00, 0x01,
	      };
	      
	  /* Bus detection*/
	  ret = uclass_get_device_by_seq (UCLASS_I2C, i2c_bus, &bus);
	  if (ret)
	    {
	      printf ("%s: No bus %d\n", __func__, i2c_bus);
	      return 1;
	    }

	  /*I2C chip on the bus detection*/
	  ret = dm_i2c_probe (bus, 0x2c, 0, &mipi2lvds_dev);
	  if (ret)
	    {
	      printf ("%s: Can't find device id=0x%x, on bus %d, ret %d\n", __func__,
	    		  0x2c, i2c_bus, ret);
	      return 1;
	    }

	    /* offset */
	    i2c_set_chip_offset_len (mipi2lvds_dev, 1);

	    for(int i = 0;i<(sizeof(sn65_values)/sizeof(sn65_values[0]));i++){
	      sn65dsi84_i2c_reg_write(mipi2lvds_dev, sn65_addr[i], &sn65_values[i], sizeof(sn65_values[i]));
	      mdelay(10);
	    }

	    mdelay(10);

	    /*Soft reset set */
	    uint8_t val[1];
	    val[0]=1;
	    sn65dsi84_i2c_reg_write (mipi2lvds_dev, 0x9, &val[0], sizeof(val[0]));

return 0;
}

#ifdef CONFIG_VIDEO_MXS

#define MIPI_RESET_GPIO	IMX_GPIO_NR(3, 19)
#define LED_PWM_EN_GPIO	IMX_GPIO_NR(1, 23)
#define BL_ON_GPIO IMX_GPIO_NR(1,14)
#define VLCD_ON_GPIO IMX_GPIO_NR(3,15)

static iomux_cfg_t const mipi_reset_pad[] = {
	MX7ULP_PAD_PTC19__PTC19 | MUX_PAD_CTRL(MIPI_GPIO_PAD_CTRL),
};

static iomux_cfg_t const led_pwm_en_pad[] = {
	MX7ULP_PAD_PTA23__PTA23 | MUX_PAD_CTRL(MIPI_GPIO_PAD_CTRL),
};

static iomux_cfg_t const bl_on_pad[] = {
  MX7ULP_PAD_PTA14__PTA14 | MUX_PAD_CTRL(MIPI_GPIO_PAD_CTRL),
};

static iomux_cfg_t const vlcd_on_pad[] = {
  MX7ULP_PAD_PTC15__PTC15 | MUX_PAD_CTRL(MIPI_GPIO_PAD_CTRL),
};

struct mipi_dsi_client_dev sn65dsi84_dev = {
	.channel	= 0,
	.lanes = 2,
	.format  = MIPI_DSI_FMT_RGB888,
	.mode_flags = MIPI_DSI_MODE_VIDEO | MIPI_DSI_MODE_VIDEO_SYNC_PULSE |
			  MIPI_DSI_MODE_EOT_PACKET | MIPI_DSI_MODE_VIDEO_HSE,
};

struct mipi_dsi_client_driver sn65dsi84_drv = {
  .name = "SN65DSI84_ET0350",
  .dsi_client_setup = sn65dsi84_init,
};

struct mipi_dsi_client_driver sn65dsi84_lvds_drv = {
  .name = "LVDS_DISP",
  .dsi_client_setup = sn65dsi84_lvds_init,
};

void enable_sn65dsi84(struct display_info_t const *dev)
{
	
	mx7ulp_iomux_setup_multiple_pads(mipi_reset_pad, ARRAY_SIZE(mipi_reset_pad));	
	gpio_request(MIPI_RESET_GPIO, "MIPI_RESET");	
	
	/* Enable backlight */
	mx7ulp_iomux_setup_multiple_pads(led_pwm_en_pad, ARRAY_SIZE(led_pwm_en_pad));
	gpio_request(LED_PWM_EN_GPIO, "led_pwm_en");
	gpio_direction_output(LED_PWM_EN_GPIO, 0);

   /* Setup DSI host driver */
	mipi_dsi_northwest_setup(DSI_RBASE, SIM0_RBASE);
	
	if (!strcmp(dev->mode.name, "SN65DSI84_ET0350")) {
		/* Init hx8363 driver, must after dsi host driver setup */
		imx_mipi_dsi_bridge_add_client_driver(&sn65dsi84_drv);
		sn65dsi84_dev.name = dev->mode.name;
		imx_mipi_dsi_bridge_attach(&sn65dsi84_dev); /* attach sn65dsi device */
	}
	else {
		imx_mipi_dsi_bridge_add_client_driver(&sn65dsi84_lvds_drv);
		sn65dsi84_dev.name = dev->mode.name;
		imx_mipi_dsi_bridge_attach(&sn65dsi84_dev);
	}
}

struct display_info_t const displays[] = {{
	.bus = LCDIF_RBASE,
	.addr = 0,
	.pixfmt = 24,
	.detect = NULL,
	.enable	= enable_sn65dsi84,
	.mode	= {
		.name = "LVDS_DISP",
		.xres = 800,
		.refresh = 60,
		.yres         = 480,
		.pixclock     = 29845, // 10^12/freq
		.left_margin  = 48,
		.right_margin = 40,
		.upper_margin = 33,
		.lower_margin = 10,
		.hsync_len    = 20,
		.vsync_len    = 2,
		.sync         = FB_SYNC_EXT,
		.vmode        = FB_VMODE_NONINTERLACED

	}}, {
		.bus = LCDIF_RBASE,
		.addr = 0,
		.pixfmt = 24,
		.detect = NULL,
		.enable	= enable_sn65dsi84,
		.mode	= {
			.name = "SN65DSI84_ET0350",
			.refresh = 60,
			.xres			= 320,
			.yres			= 240,
			.pixclock		= 37037, // 10^12/freq
			.left_margin	= 48,
			.right_margin	= 20,
			.hsync_len		= 20,
			.upper_margin	= 8,
			.lower_margin	= 4,
			.vsync_len		= 10,
			.sync			= FB_SYNC_EXT,
			.vmode			= FB_VMODE_NONINTERLACED
	}}
};
size_t display_count = ARRAY_SIZE(displays);
#endif

int board_init(void)
{
	/* address of boot parameters */
	gd->bd->bi_boot_params = PHYS_SDRAM + 0x100;

#ifdef CONFIG_FSL_QSPI
	board_qspi_init();
#endif

#ifndef CONFIG_DM_USB
	setup_usb();
#endif
	return 0;
}

int board_mmc_get_env_dev(int devno)
{
	return devno;
}

#ifdef CONFIG_BOARD_LATE_INIT
/* If variable has value "undef", update it with a board specific value */
static void setup_var(const char *varname, const char *content, int runvar)
{
	char *envvar = env_get(varname);

	/* If variable is not set or does not contain string "undef", do not
	   change it */
	if (!envvar || strcmp(envvar, "undef"))
		return;

	/* Either set variable directly with value ... */
	if (!runvar) {
		env_set(varname, content);
		return;
	}

	/* ... or set variable by running the variable with name in content */
	content = env_get(content);
	if (content)
		run_command(content, 0);
}

int board_late_init(void)
{
#if 0
	env_get("tee", "no");
#ifdef CONFIG_IMX_OPTEE
	env_get("tee", "yes");
#endif
#endif

	mx7ulp_iomux_setup_multiple_pads(bl_on_pad, ARRAY_SIZE(bl_on_pad));
	mx7ulp_iomux_setup_multiple_pads(vlcd_on_pad, ARRAY_SIZE(vlcd_on_pad));	
	
	/*set vlcd on */
	gpio_request(VLCD_ON_GPIO, "vlcd_on");
	gpio_direction_output(VLCD_ON_GPIO, 1);

	/*Blacklight on*/
	gpio_request(BL_ON_GPIO, "bl_on");
	gpio_direction_output(BL_ON_GPIO, 1);
	
	setup_var("bootdelay", "3", 0);
	setup_var("bootauxfile", "power_mode_switch.img", 0);
	/* Set some variables by runnning another variable */
	setup_var("mode", ".mode_ro", 1);
	setup_var("console", ".console_serial", 1);
	setup_var("login", ".login_serial", 1);
	setup_var("init", ".init_init", 1);
	setup_var("rootfs", ".rootfs_mmc", 1);
	setup_var("kernel", ".kernel_mmc", 1);
	setup_var("bootfdt", "set_bootfdt", 1);
	setup_var("auxcore", ".auxcore_mmc", 1);
	setup_var("fdt", ".fdt_mmc", 1);
	setup_var("bootargs", "set_bootargs", 1);

	return 0;
}
#endif

