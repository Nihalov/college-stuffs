class bankAcc:
  def __init__(self, name, accNo, accType, balance):
    self.name = name
    self.accNo = accNo
    self.accType = accType
    self.balance = balance
    
  def deposit(self, amount):
    self.balance +=amount
  
  def withdraw(self, amount):
    self.balance-=amount


acc1 = bankAcc('Nihal', 123456789, 'savings', 1000)

while True:
  print("1.Deposit")
  print("2.Withdraw")
  print("3.Balance")
  print("4.Exit")
  n = int(input("Enter choice(0-4): "))
  if n==1:
    am = int(input("Enter amount to be deposited: "))
    acc1.deposit(am)
  elif n==2:
    am = int(input("Enter amount to be withdrawn: "))
    acc1.withdraw(am)
  elif n==3:
    print("---- Balance =",acc1.balance,"----")
  elif n==4:
    exit()
  else:
    print("Enter valid choice :)")