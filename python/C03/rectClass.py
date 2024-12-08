class rect:
  def __init__(self, length, bredth):
    self.length = length
    self.bredth = bredth
    
  def area(self):
    return self.length*self.bredth
  
  def peri(self):
    return 2 * (self.length * self.bredth)
  
  def compare(self,other):
    if self.area() > other.area():
      return f"Rectangle 1 has larger area than rectangle 2"
    else:
      return f"Rectangle 2 has larger area than rectangle 1"
  
ob1 = rect(9,6)
ob2 = rect(6,7)
print("Rectange 1: Area =",ob1.area(),"Perimeter =",ob1.peri())
print("Rectange 2: Area =",ob2.area(),"Perimeter =",ob2.peri())
print(ob1.compare(ob2))