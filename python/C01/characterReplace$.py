s=input("Enter a string: ")
index = s[0]
k=s[1:].replace(index,"$")
print(index+k)
