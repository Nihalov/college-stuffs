s=input("Enter list of words seperated by space: ")
ls=s.split(" ")
long_len=len(ls[0])
print(long_len)
res=s[0]
for i in ls[1:]:
  if len(i)>long_len:
    long_len=len(i)
print(f"longest string have length {long_len}")