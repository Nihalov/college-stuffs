def check_positive_number(number):
  assert number > 0, "Number must be positive!"
  print(f"The number {number} is positive.")


try:
  num = int(input("Enter a positive number: "))
  check_positive_number(num)
except AssertionError as e:
  print(f"AssertionError: {e}")
