a=int(input("Enter side of square: "))
l=int(input("Enter length of rectangle: "))
b=int(input("Enter bredth of rectangle: "))
th=int(input("Enter height of triangle: "))
tb=int(input("Enter bredth of triangle: "))
sq=lambda x:x**2
rect=lambda x,y:x*y
tri=lambda x,y:x*y/2
print(f"Area of square={sq(a)}")
print(f"Area of rectangle={rect(l,b)}")
print(f"Area of triangle={tri(th,tb)}")
