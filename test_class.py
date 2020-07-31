#!/home/developer/Desktop/openHTF/python_virenv/bin/python3
class Employee:

  #class variables
  raise_amount=1.04
  num_of_emp=0
  enable_remt=True
  
  #constructor
  def __init__(self, first,last,pay):
    self.first=first
    self.last=last
    self.pay=pay
    self.email=self.first+'.'+self.last+'@gmail.com'
    Employee.num_of_emp+=1
    
  #regular methods: takes the instance "self" as a first parameter
  def fullname(self):
    return('{} {}'.format(self.first, self.last))
  
  def apply_raise(self):
    self.pay=int(self.pay*self.raise_amount)
    
    #class methods: takes the first parameter class(cls) itsself 
  @classmethod
  def set_raise_amt(cls,amount):
      cls.raise_amount=amount
      
class developer(Employee):
  raise_amount=1.10
  
  def __init__(self,first ,last ,pay ,prog_lang):
    super().__init__(first, last, pay)
    self.prog_lang=prog_lang
  
class Manager(Employee):
  raise_amount = 2.5
  def __init__(self, first, last, pay, employees):
      super().__init__(first, last, pay)
      #self.employees=employees
      if employees is None:
        self.employees=[]
        print("Not any Employee")
        Manager.raise_amount=5       
      else:
        self.employees=employees
        print("Employee")
        Manager.raise_amount=6
        
  def add_emp(self,emp):
    if emp not in self.employees:
      self.employees.append(emp)
  
  def remove_emp(self,emp):
    if emp in self.employees:
      self.employees.remove(emp)   
      
  def print_emps(self):
    for emp in self.employees:
      print('--->',emp.fullname())
      
  raise_amount=10  
      #print('-->',emp.fullname(), emp.email())
      
#Instances created emp_1 and emp_2static

dev_1=Employee('Ravindra','Chand',50000)
print(dev_1.first)
print(dev_1.raise_amount)
dev_2=developer('Asmita','Shrestha',50000,'Python')
dev_3=developer('Devi','Bhatta',60000,'C')
mgr_1=Manager('Himal','Bam',60000,[])
#for @classmethod testing
Employee.set_raise_amt(1.05)
print(Employee.raise_amount)
print(dev_1.raise_amount)
print(dev_2.raise_amount)
print(dev_3.raise_amount)
#print(isinstance(Manager,Employee))
print(mgr_1.fullname())
#mgr_1.add_emp(dev_3)
#mgr_1.add_emp(dev_2)
print(mgr_1.print_emps())
print(mgr_1.raise_amount)


