n=int(input("Enter number of line: "))
for i in range(1,n+1):
  for j in range(i,(i*i)+1,i):
    print(j,end=" ")
  print("\n")