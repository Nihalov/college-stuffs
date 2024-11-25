l=input("Enter numbers seperated by space: ")
lst=[int(num) for num in l.split(" ")]
sum=0
for i in lst:
    sum+=i

print(sum)
