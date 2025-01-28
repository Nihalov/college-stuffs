class marksExc(Exception):
  def __init__(self, message = "Failed!"):
    self.message = message
    super().__init__(message)
    
def check_marks(marks):
  if marks < 50:
    raise marksExc()
  else:
    print("Passed!")

try:
    mark = int(input("Enter the marks scored by the student: "))
    check_marks(mark)

except marksExc as e:
    print(f"Exception: {e}")
