/*****************************************************************************/
/***     ______       _____    ______                           _          ***/
/***    |  ____|__   / ____|  |  ____|                         | |         ***/
/***    | |__ ( _ ) | (___    | |__  __  ____ _ _ __ ___  _ __ | | ___     ***/
/***    |  __|/ _ \/\\___ \   |  __| \ \/ / _` | '_ ` _ \| '_ \| |/ _ \    ***/
/***    | |  | (_>  <____) |  | |____ >  < (_| | | | | | | |_) | |  __/    ***/
/***    |_|   \___/\/_____/   |______/_/\_\__,_|_| |_| |_| .__/|_|\___|    ***/
/***                                                     |_|               ***/
/*****************************************************************************/
/***                                                                       ***/
/***                                                                       ***/
/***               T E M P E R A T U R E _ C O N T R O L                   ***/
/***                                                                       ***/
/***                                                                       ***/
/*****************************************************************************/
/*** File:     temperature_control.c                                       ***/
/*** Author:   R. Chand, F&S Elektronik Systeme GmbH                       ***/
/*** Created:  22.07.2020                                                  ***/
/***                                                                       ***/
/*** Description                                                           ***/
/*** -----------                                                           ***/
/*** Send/receive the temperatures from and to the klimaanlage using UART  ***/
/*** 				  										interface   			                       ***/
/***                                                                       ***/
/*** Compile with:                                                         ***/
/***         arm-linux-gcc -o temperature_control temperature_control.c    ***/
/***                                                                       ***/
/*****************************************************************************/
/*** THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY ***/
/*** KIND,  EITHER EXPRESSED OR IMPLIED,  INCLUDING BUT NOT LIMITED TO THE ***/
/*** IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR ***/
/*** PURPOSE.                                                              ***/
/*****************************************************************************/

#include <stdio.h> // standard input / output functions
#include <string.h> // string function definitions
#include <unistd.h> // UNIX standard function definitions
#include <fcntl.h> // File control definitions
#include <errno.h> // Error number definitions
#include <termios.h> // POSIX terminal control definitionss
#include <time.h>   // time calls
#include <sys/ioctl.h>
#include <stdlib.h>  //system call

/*define default maximum junction and klima temperature*/
#define MAX_JUNCTION_TEMP 95
#define MAX_KLIMA_TEMP 70
/*define sign, 10th and 1 place of temperature*/
#define SIGN 6
#define TEMP_10_PLACE 7
#define TEMP_1_PLACE 8
#define INCREMENTER 5
#define POINT_TO_SOLL 5
#define TOLERANCE 2
/*global definition of the junction temperature*/
double junction_temptr = 0;

/*****************************************************************************
*** Function:    int write_system_commands(char *command)                  ***
***                                                                        ***
*** Parameters:  command:      Pointer to system command                   ***
***                                                                        ***
*** Return:      -                                                         ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Write the command to the system.                                       ***
*****************************************************************************/
int write_system_commands(char *command,int flg)
{	
	FILE *pipe;
	char buffer[60];
	
	/*opening pipe to file for reading*/
	pipe=popen(command,"r");
	if (!pipe){
	  perror("Error opening file\n");
	  return -1;
	}
	
	if (flg==1) {
	  /*Buffer values to 0*/
	  memset(buffer, 0, sizeof(buffer));
	
	  /* get the value of core temperature*/
	  if(fgets(buffer, 60, pipe)!=NULL) {
	    for(int i=0; i<5; i++){
	      buffer[i] = (int)(buffer[i]-'0');   
	    }
	    junction_temptr=buffer[0]*10000+buffer[1]*1000+buffer[2]*100+buffer[3]*10+buffer[4]*1;
	    junction_temptr=(junction_temptr/1000);
	  }
  }

	fclose(pipe);
	return 0;
}

/*****************************************************************************
*** Function:    int open_port(char *device)                               ***
***                                                                        ***
*** Parameters:  device: Name of the device                                ***
***                                                                        ***
*** Return:      filedescriptor                                            ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Open a filedescriptor.                                                 ***
*****************************************************************************/
int open_port(char *device)
{
	int fd;

	fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY | O_NONBLOCK);
	printf("device: %s\n",device);
	if(fd < 1)
	{
		printf("Unable to open %s", device);
		return -1;
	}

	return(fd);
}

/*****************************************************************************
*** Function:    int configure_port(int fd)                                ***
***                                                                        ***
*** Parameters:  fd: Name of the filedescriptor                            ***
***                                                                        ***
*** Return:      new filedescriptor                                        ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Configure the UART port.                                               ***
*****************************************************************************/
int configure_port(int fd)
{
	struct termios serial_port_settings;      // structure to store the port settings in

	tcgetattr(fd, &serial_port_settings);

	cfmakeraw(&serial_port_settings);	//fehlfunktion bei ttymxc1
	cfsetispeed(&serial_port_settings, B50);    // set baud rates
	cfsetospeed(&serial_port_settings, B50);
	serial_port_settings.c_cflag &= ~PARENB;    // set no parity, stop bits, data bits
	serial_port_settings.c_cflag &= ~CSTOPB;
	serial_port_settings.c_cflag &= ~CSIZE;
	serial_port_settings.c_cflag |= CS8;
	serial_port_settings.c_cflag |= CREAD | CLOCAL; 
	
	tcsetattr(fd, TCSANOW, &serial_port_settings);    // apply the settings to the port
	return(fd);
}

/*****************************************************************************
*** Function:    int get_speed(int fd)                                     ***
***                                                                        ***
*** Parameters:  fd: filedescriptor                                        ***
***                                                                        ***
*** Return:      filedescriptor                                            ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Get the baudrate of the filedescriptor.                                ***
*****************************************************************************/
int get_speed(int fd)
{
	struct termios serial_port_settings;
	speed_t speed;

	tcgetattr(fd, &serial_port_settings);
	speed = cfgetospeed(&serial_port_settings); //returns the output baud rate stored in the termios structure pointed to by port_settings.

	switch(speed) {
		case  B0:
			printf("baudrate is set to B0 ... ");
			break;
		case B50:
			printf("baudrate is set to B50 ... ");
			break;
		case B75:
			printf("baudrate is set to B75 ... ");
			break;
		case B110:
			printf("baudrate is set to B110 ... ");
			break;
		case B134:
			printf("baudrate is set to B134 ... ");
			break;
		case B150:
			printf("baudrate is set to B150 ... ");
			break;
		case B200:
			printf("baudrate is set to B200 ... ");
			break;
		case B300:
			printf("baudrate is set to B300 ... ");
			break;
		case B600:
			printf("baudrate is set to B600 ... ");
			break;
		case B1200:
			printf("baudrate is set to B1200 ... ");
			break;
		case B1800:
			printf("baudrate is set to B1800 ... ");
			break;
		case B2400:
			printf("baudrate is set to B2400 ... ");
			break;
		case B4800:
			printf("baudrate is set to B4800 ... ");
			break;
		case B9600:
			printf("baudrate is set to B9600 ... ");
			break;
		case B19200:
			printf("baudrate is set to B19200 ... ");
			break;
		case B38400:
			printf("baudrate is set to B38400 ... ");
			break;
		case B57600:
			printf("baudrate is set to B57600 ... ");
			break;
		case B115200:
			printf("baudrate is set to B115200 ... ");
			break;
		case B230400:
			printf("baudrate is set to B230400 ... ");
			break;
		default:
			printf("baudrate not known!\n");
			return -1;
	}
	return 0;
}

/*****************************************************************************
*** Function:    int set_speed(int fd, speed_t speed)                      ***
***                                                                        ***
*** Parameters:  fd: filedescriptor                                        ***
***              speed: baudrate                                           ***
***                                                                        ***
*** Return:      filedescriptor                                            ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** set the baudrate.                                                      ***
*****************************************************************************/
int set_speed(int fd, speed_t speed)
{
	struct termios serial_port_settings;      // structure to store the port settings in

	tcgetattr(fd, &serial_port_settings);
	cfsetispeed(&serial_port_settings, speed);    // set baud rates
	cfsetospeed(&serial_port_settings, speed);
	tcsetattr(fd, TCSANOW, &serial_port_settings);    // apply the settings to the port

	return 0;
}
/*****************************************************************************
*** Function:    void measure_junction_temp()                              ***
***                                                                        ***
*** Parameters:                                                            ***
***                                                                        ***
*** Return:                                                                ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Send the command to the board terminal for getting CPU temperature.    ***
*****************************************************************************/
void measure_junction_temp()
{
	char buf[50];
	int flg = 1;
	sprintf(buf, "cat /sys/class/thermal/thermal_zone0/temp");
	write_system_commands(buf,flg);
}
/*****************************************************************************
*** Function:    void cpufreq_scaling_governor()                           ***
***                                                                        ***
*** Parameters:                                                            ***
***                                                                        ***
*** Return:                                                                ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
***Send the command to the board terminal for activating CPU performance.  ***
*****************************************************************************/
void cpufreq_scaling_governor()
{
	system("echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
}
/*****************************************************************************
*** Function:    void usage(const char *progname)                          ***
***                                                                        ***
*** Parameters:  progname: Name of the program                             ***
***                                                                        ***
*** Return:      -                                                         ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Show the usage of the program.                                         ***
*****************************************************************************/
void usage(const char *progname)
{
	printf("\n"
	       "Usage: %s device \n"
	       "\n"
	       "  device:  UART device to use (one of /dev/ttymxcX)\n"
	       "\n",
	       progname);
}

/*****************************************************************************
*** Function:    int main(int argc, char *argv[])                          ***
***                                                                        ***
*** Parameters:  argc: Number of command line arguments                    ***
***              argv: Pointer to command line argmuents                   ***
***                                                                        ***
*** Return:      Program return code                                       ***
***                                                                        ***
*** Description                                                            ***
*** -----------                                                            ***
*** Parse the command line options and call the necessary functions to     ***
*** test UART                                                              ***
*****************************************************************************/
int main(int argc, char *argv[])
{	
	int added_size_speed, added_size_speed_t;
	int fd = 0, nbytes = 0, err = 0, time_out = 0;
	char klimastatus[6] = "$01I\r";
	char klimatemp[110];
	char start_klimaanlage[110] = "$01E 0020.0 0000.0 0000.0 0000.0 0000.0 0000.0 0.00000 01000000000000000000000000000000\r";
	char stop_klimaanlage[110] =  "$01E 0000.0 0000.0 0000.0 0000.0 0000.0 0000.0 0.00000 00000000000000000000000000000000\r";
	char buffer[120];
	float soll_value = 0.0 ;
	char* soll_value_ptr;
	float return_klimatemp = 0.0;
	char* return_klimatemp_ptr;
	
	
	speed_t speed[] = { B19200 };

	if ((argc < 2) || (argc > 5)) {
		usage(argv[0]);
		return 1;
	}

	fd= open_port(argv[1]);	
	if(fd < 0)
		return 1;

	fd = configure_port(fd);
	if(fd < 0)
		return 1;

  /*Setting baudrate to 19200*/
	err = set_speed(fd, speed[0]);
	err = get_speed(fd);
	if(err < 0)
		return 1;
		
  soll_value_ptr = start_klimaanlage + POINT_TO_SOLL;
  soll_value = strtof(soll_value_ptr, NULL);
  
	/* write the data to the klimaanlage for start mode*/
	nbytes = write(fd, start_klimaanlage, strlen(start_klimaanlage));
	if(nbytes < 1) {
		printf("write command failed!\n");
		close(fd);
		return 1;
	}
	printf("\nSetting data is sent through %s port!\n", argv[1]);
	
	/*change /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor "interactive" to "performance" to activate CPU with full performance*/
  cpufreq_scaling_governor();
	
	/*wait for some time until the klimaanlage reaches it's desired value, ex.: 28°C*/
	while (1){
	  	
	  nbytes = write(fd, klimastatus, strlen(klimastatus));
	  if(nbytes < 1) {
		  printf("write command failed!\n");
		  close(fd);
		  return 1;
	  }
	  
	  sleep(2);
	  
	  memset(buffer, 0, sizeof(buffer));
	  
	  /* read the data from klimaanlage*/
	  nbytes = read(fd, &buffer, strlen(buffer));
	  if (nbytes<1){
	    printf("failed to read temperature from the device!\n");
		  close(fd);
		  return 1;
	  }
	  
	  for(int i = 0; i < strlen(buffer); i++){
	    buffer[i] = (buffer[i]-'0');   
	    printf("Buffer value: %d\n",buffer[i]);	    
	  }
	  
	  /* check the klima temperature if it lies between the soll(±2 °C) temperature*/
	  return_klimatemp_ptr = buffer + POINT_TO_SOLL;
	  return_klimatemp = strtof(return_klimatemp_ptr, NULL);
	  printf("Device temperature : %.1f\n",return_klimatemp);
	  if (((soll_value-TOLERANCE) >= return_klimatemp) && (return_klimatemp <=  (soll_value+TOLERANCE)))
	    goto IDLE_STATE;
	
	}
	
	        /*Start loop here, then measure the junction temperature until it becomes stable,i.e. does not flunctuate*/	
IDLE_STATE:	measure_junction_temp();
	          printf("Junction (core) temperature: %.3f°C\n",junction_temptr);
	          while (1){
	              double temp = 0;
	              temp = junction_temptr;
	          
	              measure_junction_temp();	          
	              if 	(junction_temptr == temp) {
	                /* Timeout */
		              if(time_out>=10000) {
		                printf("\ntimeout!\n");
		                goto MEASUREMENTS_IDLE;
		              }
		              printf("Time out value: %d core temperature: %.3f\n",time_out, junction_temptr);
		              time_out++;	
		            }
	          }	

            /*Begin measurements of klima temperature, junction temperature and save in log file*/
MEASUREMENTS_IDLE: nbytes = write(fd, klimastatus, strlen(klimastatus));
                   if(nbytes < 1) {
		                printf("write command failed!\n");
		                close(fd);
		                return 1;
	                 }
	            
	                 /*Wait for 3 seconds to reiceive the response from klimaanlage*/
	                 sleep(3);
		
	                 /* initialize buffer with zero */
	                 memset(buffer, 0, sizeof(buffer));
	
	                 /* read the data from klimaanlage*/
	                 nbytes = read(fd, &buffer, strlen(buffer));
	                 if (nbytes<1){
	                  printf("failed to read temperature from the device!\n");
		                close(fd);
		                return 1;
	                 }
	                 for(int i = 0; i < strlen(buffer); i++){
	                  buffer[i] = (buffer[i]-'0');   
	                  printf("Buffer value: %d\n",buffer[i]);	 
	                 }
	                 return_klimatemp_ptr = buffer + POINT_TO_SOLL;
	                 return_klimatemp = strtof(return_klimatemp_ptr, NULL);
	                 printf("Device temperature : %.1f\n",return_klimatemp);
	            
	                 /*measuring core temperature again*/
	                 measure_junction_temp();
	                 if (junction_temptr <= MAX_JUNCTION_TEMP) {	           
	                  goto LOADED_STATE;	           
	                 }
	                 else{
	                  nbytes = write(fd, stop_klimaanlage, strlen(stop_klimaanlage));
	                  if(nbytes < 1) {
		                 printf("failed to send the data to stop the device!\n");
		                 close(fd);
		                 return 1;
	                  }
	                 }

             /*Loaded state*/	           
LOADED_STATE: measure_junction_temp();
	            printf("Junction (core) temperature: %.3f°C\n",junction_temptr);
	            while (1){
	              double temp = 0;
	              temp = junction_temptr;
	          
	              measure_junction_temp();	          
	              if 	(junction_temptr == temp) {
	                /* Timeout */
		              if(time_out>=10000) {
		                printf("\ntimeout!\n");
		                goto MEASUREMENTS_LOADED;
		              }
		              printf("Time out value: %d core temperature: %.3f\n",time_out, junction_temptr);
		              time_out++;	
		            }
	            }
	          
MEASUREMENTS_LOADED:	nbytes = write(fd, klimastatus, strlen(klimastatus));
             if(nbytes < 1) {
		           printf("write command failed!\n");
		           close(fd);
		           return 1;
	           }
	            
	           /*Wait for 3 seconds to reiceive the response from klimaanlage*/
	           sleep(3);
		
	           /* initialize buffer with zero */
	           memset(buffer, 0, sizeof(buffer));
	
	           /* read the data from klimaanlage*/
	           nbytes = read(fd, &buffer, strlen(buffer));
	           if (nbytes<1){
	               printf("failed to read temperature from the device!\n");
		             close(fd);
		             return 1;
	           }
	            
	           for(int i = 0; i < strlen(buffer); i++){
	             buffer[i] = (buffer[i]-'0');   
	             printf("Buffer value: %d\n",buffer[i]);	 
	           } 
	           return_klimatemp_ptr = buffer + POINT_TO_SOLL;
	           return_klimatemp = strtof(return_klimatemp_ptr, NULL);
	           printf("Device temperature : %.1f\n",return_klimatemp);
	            
	           int start_temp_incr=0;
	            /*measuring core temperature again*/
	           measure_junction_temp();
	           if (junction_temptr <= MAX_JUNCTION_TEMP) {
	            
	            start_temp_incr =  (start_klimaanlage[TEMP_10_PLACE]-'0')*10+(start_klimaanlage[TEMP_1_PLACE]-'0');
	            
	            if(start_temp_incr <= MAX_KLIMA_TEMP){
	              /*checking negative value and incrementing the klima temperature by 5°C*/
	              if (start_klimaanlage[SIGN] == '-'){
	                start_temp_incr = (-1)*start_temp_incr;	              
	                start_temp_incr += INCREMENTER;
	                if (start_temp_incr < 0)
	                  start_klimaanlage[SIGN]='-';
	                else
	                  start_klimaanlage[SIGN]='0';
	                start_temp_incr = (-1)*start_temp_incr;	
	                start_klimaanlage[TEMP_10_PLACE]=start_temp_incr/10;
	                start_klimaanlage[TEMP_1_PLACE]=start_temp_incr%10;
	              }
	              else{
	                start_temp_incr += INCREMENTER;
	                start_klimaanlage[TEMP_10_PLACE]=start_temp_incr/10;
	                start_klimaanlage[TEMP_1_PLACE]=start_temp_incr%10;
	              }
	            }
	            /*if max. temperature reaches, shut down the klima anlage*/ 
	            else{
	              nbytes = write(fd, stop_klimaanlage, strlen(stop_klimaanlage));
	              if(nbytes < 1) {
		              printf("failed to send the data to stop the device!\n");
		              close(fd);
		              return 1;
	              }
	            }
	            /*after the temperature increment, goto back IDLE_STATE*/
	            goto IDLE_STATE;	
	                       
	           }
	           /*if max. junction temperature reaches, shut down the klima anlage*/
	           else{
	            nbytes = write(fd, stop_klimaanlage, strlen(stop_klimaanlage));
	            if(nbytes < 1) {
		            printf("failed to send the data to stop the device!\n");
		            close(fd);
		            return 1;
	            }
	           }
              
	           	           
	printf("Junction (core) temperature after: %.3f°C\n",junction_temptr);
	close(fd);
	return 0;
}
