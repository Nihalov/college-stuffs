class rect:
  def __init__(self, len, wid):
    self.len = len
    self.wid = wid
  def area(self):
    return self.len * self.wid
  def __lt__(self, other):
    return self.area()<other.area()
  
r1 = rect(10, 20)
r2 = rect(15,15)

print("Area of r1=", r1.area())
print("Area of r2=", r2.area())
if r1<r2:
  print("r1 has smaller area than r2")
else:
    print("r2 has smaller area than r1")