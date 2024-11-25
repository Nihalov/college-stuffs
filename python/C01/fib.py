n=int(input("Enter a number: "))
t1,t2=0,1
print("Fibonacci series: \n")
print(t1,end=" ")
for i in range(n-1):
    t1,t2=t2,t1+t2
    print(t1,end=" ")
    
    
