import math
ll=int(input("Enter lower limit: "))
ul=int(input("Enter upper limit: "))
lst=[]
for i in range(ll,ul+1):
  s=str(i)
  ev=True
  for j in s:
    if int(j)%2!=0:
      ev=False
      break
  if ev:
    if math.sqrt(i)%1==0:
      lst.append(i)
print(lst)