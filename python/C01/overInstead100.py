l=input("Enter a list of integers seperated by space: ")
nums=l.split(" ")
lst=[]
for i in nums:
    num=int(i)
    if num>100:
        lst.append("over")
    else:
        lst.append(num)
print(lst)
