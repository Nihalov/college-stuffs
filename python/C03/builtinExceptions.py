try:
  print("Attempting division by zero...")
  result = 10 / 0
except ZeroDivisionError as e:
  print(f"ZeroDivisionError caught: {e}")
  
try:
  print("\nAttempting to convert invalid input to int...")
  number = int("invalid")
except ValueError as e:
  print(f"ValueError caught: {e}")
  
try:
  print("\nAccessing out-of-range index in a list...")
  numbers = [1, 2, 3]
  print(numbers[5])
except IndexError as e:
  print(f"IndexError caught: {e}")

try:
  print("\nAdding incompatible types...")
  result = "text" + 10
except TypeError as e:
  print(f"TypeError caught: {e}")
  
try:
  print("\nAttempting to open a non-existent file...")
  with open("non_existent_file.txt", "r") as file:
    content = file.read()
except FileNotFoundError as e:
  print(f"FileNotFoundError caught: {e}")