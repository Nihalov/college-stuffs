s=input("Enter a string:")
if s[-3:]=='ing':
  s+='ly'
else:
  s+='ing'
print(s)