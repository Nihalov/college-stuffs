n=int(input("Enter a number: "))
print(f"Factors of {n} are: ",end="")
for i in range(1,n+1):
  if n%i==0:
    print(i,end=" ")
