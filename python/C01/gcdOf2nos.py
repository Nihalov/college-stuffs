n1=int(input("Enter first number: "))
n2=int(input("Enter second number: "))
while n2!=0:
  n1,n2=n2,n1%n2
print(f"GCD is {n1}")