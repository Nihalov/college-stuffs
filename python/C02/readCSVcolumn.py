import csv
def readColumn(file_path, columns):
  with open(file_path, 'r') as csvfile:
    csv_reader = csv.reader(csvfile)
    header = next(csv_reader)
    column_indeces = [header.index(col) for col in columns if col in header]
    print("Selected columns: ", [header[i] for i in column_indeces])
    for row in csv_reader:
      print([row[i] for i in column_indeces])
  

file_path = "C:/basic programming/python/C02/sampleCSV.csv"
columns = ["Name","City"]
readColumn(file_path, columns)