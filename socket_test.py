#!/home/developer/Desktop/openHTF/python_virenv/bin/python3

import netifaces as ni 

ni.ifaddresses('eth1')
ip = ni.ifaddresses('eth1')[ni.AF_INET][0]['addr']
print(ip)

commandline='./selftest_network eth0'
commandline=commandline+" "+ip
print(commandline)
