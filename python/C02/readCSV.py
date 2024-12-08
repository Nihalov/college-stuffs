import csv
def readcsv(file_path):
  with open (file_path, 'r') as csvfile:
    csv_reader = csv.reader(csvfile)
    for row in csv_reader:
      print(row)
file_path = "C:/basic programming/python/C02/sampleCSV.csv"
readcsv(file_path)