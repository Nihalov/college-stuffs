a=input("Enter first name seperated by space: ")
names=a.split(" ")
count=0
for name in names:
    for char in name:
        if char=="a":
            count+=1
print(count)
