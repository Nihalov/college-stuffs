def read_files_to_lst(filename):
  try:
    with open(filename,'r') as file:
      # lines=file.readline()
      lines = [line.strip() for line in file]
      print(lines)
  except Exception as e:
    print(e)

filename="C:/basic programming/python/C02/sample_file.txt"
read_files_to_lst(filename)