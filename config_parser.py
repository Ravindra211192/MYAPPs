#!/home/developer/Desktop/openHTF/python_virenv/bin/python3

import configparser
import ast

config=configparser.ConfigParser(allow_no_value=False)
config.read('config_file.ini')

print('\n') 

def display_list(list_values):
  #ADD condition to fullfill the item "all" in a list
  list_values.append("all")
  
  for typ in list_values:
    index=list_values.index(typ)
    if typ.find("=") >= 0:
        typ=typ.split("=")
        typ=typ[0]    
    print('{}-->{}'.format(index,typ))
  
def check_index(my_list,board_name,board_interface_input):

  global INTERFACE_A_B, INTERFACE_A_B_LIST, INTERFACE_ALL, BOARD_NAME, INTERFACE_COMMAND, flag, type_list_new, command_list

  if len(my_list)!=0 and INTERFACE_A_B<len(my_list):
    if my_list[INTERFACE_A_B]==my_list[len(my_list)-1]: #case :'all
      flag=len(my_list)
      INTERFACE_A_B=my_list[int(INTERFACE_A_B)]
      INTERFACE_A_B=INTERFACE_A_B+board_interface_input
      INTERFACE_ALL=my_list
      
      remove_all_from_list=INTERFACE_ALL.pop()
      uart_type_list=INTERFACE_ALL
      length=len(uart_type_list)
      BOARD_NAME=board_name    
      
    else:
      flag=1
      INTERFACE_A_B_LIST=my_list[int(INTERFACE_A_B)]      
      INTERFACE_COMMAND=INTERFACE_A_B_LIST.split("=")
      INTERFACE_A_B =INTERFACE_COMMAND[0]
      INTERFACE_COMMAND=INTERFACE_COMMAND[1]   
      BOARD_NAME=board_name
      print('Board name: {} \nInterface: {} \nInterface_command: {}'.format(BOARD_NAME, INTERFACE_A_B,INTERFACE_COMMAND))    
  else: 
    print('Selected type of the interface does not exist on the board') 
       
def input_method(board_name):

  global INTERFACE_A_B, INTERFACE_REF_UART_A, INTERFACE_REF_UART_D,  INTERFACE_REF_CAN, BOARD_NAME, interfacenamelistref, interfacecanlistref
  global uartlist, spilist, i2clist, canlist, pwmlist, networklist, sdcardlist, rtclist, displaylist, emmclist, flashlist, i2slist, usblist, wlanlist
  
  #getting options from ini file
  print('\n')
  BOARD_NAME=board_name
  board_interface=config.options(board_name)
  display_list(board_interface)
  board_interface_input=input('Select an interface for the test: \n')
    #UART type example: uart_a, uart_b selection
  if board_interface_input=='0':
   print('\n')
   #listing values of an option from ini file
   my_list=ast.literal_eval(config.get(board_name,board_interface[0]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a UART type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
    #SPI type example: spi_a, spi_b selection
  elif board_interface_input=='1':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[1]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a SPI type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
    #I2C type example: i2c_a, i2c_b selection
  elif board_interface_input=='2':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[2]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a I2C type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
    #CAN type example: can_a, can_b selection''' 
  elif board_interface_input=='3':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[3]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a CAN type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
  elif board_interface_input=='4':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[4]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a PWM type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)  
  elif board_interface_input=='5':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[5]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a NETWORK type for the test: \n'))
   check_index(my_list,board_name,board_interface_input) 
  #ADD code here for all the interface test
  elif board_interface_input=='6':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[6]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a SDCARD type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
   
  elif board_interface_input=='7':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[7]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a RTC for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
   
  elif board_interface_input=='8':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[8]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a USB for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
   
  elif board_interface_input=='9':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[9]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a DISPLAY type for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
  
  elif board_interface_input=='10':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[10]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select an eMMC for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
   
  elif board_interface_input=='11':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[11]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a FLASH for the test: \n'))
   check_index(my_list,board_name,board_interface_input) 
   
  elif board_interface_input=='12':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[12]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a WLAN for the test: \n'))
   check_index(my_list,board_name,board_interface_input) 
   
  elif board_interface_input=='13':
   print('\n')
   my_list=ast.literal_eval(config.get(board_name,board_interface[13]))
   display_list(my_list)
   INTERFACE_A_B=int(input('Select a Audio for the test: \n'))
   check_index(my_list,board_name,board_interface_input)
   
  elif board_interface_input=='14':
    print('\n')
    uartlist=ast.literal_eval(config.get(board_name,board_interface[0]))
    spilist=ast.literal_eval(config.get(board_name,board_interface[1]))
    i2clist=ast.literal_eval(config.get(board_name,board_interface[2]))
    canlist=ast.literal_eval(config.get(board_name,board_interface[3]))
    pwmlist=ast.literal_eval(config.get(board_name,board_interface[4]))
    networklist=ast.literal_eval(config.get(board_name,board_interface[5]))
    sdcardlist=ast.literal_eval(config.get(board_name,board_interface[6]))
    rtclist=ast.literal_eval(config.get(board_name,board_interface[7]))
    usblist=ast.literal_eval(config.get(board_name,board_interface[8]))
    displaylist=ast.literal_eval(config.get(board_name,board_interface[9]))
    emmclist=ast.literal_eval(config.get(board_name,board_interface[10]))
    flashlist=ast.literal_eval(config.get(board_name,board_interface[11]))    
    wlanlist=ast.literal_eval(config.get(board_name,board_interface[12]))
    i2slist=ast.literal_eval(config.get(board_name,board_interface[13]))
    
  else:
    print("Selected interface doesn't exist! Please select the one from the listed interfaces.")
  
  #Reference board UART type/commands in openHTF further forwarded
  INTERFACE_REF_UART=ast.literal_eval(config['DEFAULT']['uart'])   
  for elements in INTERFACE_REF_UART:
    
    interfacename=elements.split("=")[0]
    interfacenamelistref.append(interfacename)
    interfacecommand=elements.split("=")[1]  
    interfacenamelistref.append(interfacecommand)
    
  #Reference board CAN type/commands in openHTF further forwarded 
  INTERFACE_REF_CAN=ast.literal_eval(config['DEFAULT']['can'])  
  for element in INTERFACE_REF_CAN:
  
    interfacename=element.split("=")[0]
    interfacecanlistref.append(interfacename)
    interfacecommand=element.split("=")[1]
    interfacecanlistref.append(interfacecommand)
       
'''getting sections from ini file'''
#Begins from here starting from selecting boards name
board_name=config.sections()
display_list(board_name)

'''Global variable declaration'''
INTERFACE_A_B=''
INTERFACE_A_B_LIST=''
INTERFACE_ALL=''
BOARD_NAME=''
INTERFACE_COMMAND=''
INTERFACE_REF_UART_A=''
INTERFACE_REF_UART_D=''
INTERFACE_REF_CAN=''
flag=0
interfacenamelistref=[]
interfacecanlistref=[]
uartlist=[]
spilist=[]
i2clist=[]
canlist=[]
pwmlist=[]
networklist=[]
sdcardlist=[]
rtclist=[]
displaylist=[]
emmclist=[]
flashlist=[]
i2slist=[]
usblist=[]
wlanlist=[]
type_list_new=[]
command_list=[]

board_sel=input('Select board to undergo the test: \n')
#PicoCoreSoloX and efusA9 Board selecting for test
if board_sel=='0': 
  input_method(board_name[0])  
elif board_sel =='1':
  input_method(board_name[1])  
else:
  print("Board doesn't exist! Please select the one from the listed boards.")
  
