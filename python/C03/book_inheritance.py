class publisher:
  def __init__(self, name):
    self.name=name
  def dis(self):
    return f"Publisher: {self.name}"

class book(publisher):
  def __init__(self, name, title, author):
    super().__init__(name)
    self.title=title
    self.author=author
  def dis(self):
    publisher_info=super().dis()
    return f"{publisher_info}\nTitle: {self.title}\nAuthor: {self.author}"

class python(book):
  def __init__(self, name, title, author, price, page_no):
    super().__init__(name, title, author)
    self.price=price
    self.page_no=page_no
  def dis(self):
    book_info=super().dis()
    return f"{book_info}\nPrice: ₹{self.price}\nPage_nos: {self.page_no}"
  
b1=python("McGraw Hill Publishers", "Python: The Complete Reference","Martic C Brown", 600, 720)
print(b1.dis())