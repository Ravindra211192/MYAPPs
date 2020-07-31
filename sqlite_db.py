#!/home/developer/Desktop/openHTF/python_virenv/bin/python3
import sqlite3

conn = sqlite3.connect('validabletable.db')
c=conn.cursor()

def create_table():
  c.execute('CREATE TABLE IF NOT EXISTS stuffTOPlot(referenceboard TEXT, datestamp TEXT, testedboard TEXT, interface TEXT, comment TEXT, revision REAL, author TEXT, status TEXT )')
  return 0
  
def data_entry(): 
  c.execute("INSERT INTO stuffTOPlot VALUES('efusa9', '2020-03-05', 'PicoCoreSoloX','UART','Baudrate:9600',1.0, 'Ravindra', 'OK')")
  
  c.execute("INSERT INTO stuffTOPlot VALUES('efusa9', '2020-03-05', 'PicoCoreSoloX','SPI','Frequency:10MHZ',1.0, 'Ravindra', 'OK')")
  
  c.execute("INSERT INTO stuffTOPlot VALUES('efusa9', '2020-03-05', 'PicoCoreSoloX','I2C','Baudrate:9600',1.0, 'Ravindra', 'OK')")
  
  c.execute("INSERT INTO stuffTOPlot VALUES('efusa9', '2020-03-05', 'PicoCoreSoloX','CAN','Baudrate:9600',1.0, 'Ravindra', 'OK')")
  
  conn.commit()
  c.close()
  conn.close()

create_table()  
data_entry()
