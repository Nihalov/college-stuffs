from datetime import datetime
cur_yr = datetime.now().year
fin_yr=int(input("Enter final year: "))
for i in range(cur_yr,fin_yr):
    if i%4==0:
        print(i)
