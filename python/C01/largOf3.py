a=int(input("Enter three numbers: "))
b=int(input())
c=int(input())
if a>b:
    if a>c:
        print(a,"is largest")
    else:
        print(b,"is largest")
elif b>c:
    print(b,"is largest")
else:
    print(c,"is largest")
