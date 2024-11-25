def fact(n):
  f=1
  for i in range(1,n+1):
    print("k")
    f*=i
  return f
n=int(input("Enter a number: "))
res=fact(n)
print(f"Factorial of {n} is {res}")