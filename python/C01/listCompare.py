a=input("Enter first list of integers seperated by space: ")
b=input("Enter second list of integers seperated by space: ")
a2=a.split(" ")
b2=b.split(" ")
if len(a2)==len(b2):
    print("Length of 2 lists are same")
else:
    print("Length of 2 lists are not same")

sum1=sum2=0
#lst1=lst2=[]
for i in a2:
    num1=int(i)
    sum1+=num1
for j in b2:
    num2=int(j)
    sum2+=num2
if sum1==sum2:
    print("Sum is same")
else:
    print("Sum is not same")
print("same integers in  both lists are: ")
for i in a2:
    for j in b2:
        if i==j:
            print(i)
