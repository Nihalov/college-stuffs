import csv
def write_csv(file_path, data_dict):
  fields = data_dict.keys()
  with open(file_path, 'w', newline='') as csvfile:
    writer = csv. DictWriter(csvfile, fieldnames=fields)
    writer.writeheader()
    writer.writerow(data_dict)

def read_csv(file_path):
  with open(file_path, 'r') as csvfile:
    csv_reader = csv.reader(csvfile)
    for row in csv_reader:
      print(row)

file_path = "C:/basic programming/python/C02/data_dictCSV.csv"
data_dict = {
  "Name": "alice",
  "Age": 21,
  "City": "London"
}

write_csv(file_path, data_dict)
read_csv(file_path)