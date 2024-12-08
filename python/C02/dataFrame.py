import pandas as pd

def createcsv():
  data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Alice', None],
    'Age': [25, 30, None, 22, 25, 30],
    'City': ['New York', 'Los Angeles', 'New York', 'Chicago', 'New York', 'Los Angeles'],
    'Salary': [70000, 80000, 120000, None, 70000, 80000]
  }
  df=pd.DataFrame(data)
  df.to_csv('df.csv', index=False)

def operations():
  file_path = "C:/basic programming/python/C02/df.csv"
  df = pd.read_csv(file_path)
  
  #original df
  print("Original df:\n",df)
  
  #remove duplicates
  df = df.drop_duplicates()
  print("\nAfter removing duplicates:\n",df)
  
  #managing empty data
  #1.drop rows with empty value
  dfna = df.dropna()
  print("\nAfter droping rows with empty value:\n",dfna)
  #2.fill empty values with a specific value
  df = df.fillna({'Age': 0, 'Salary': 0})
  print("\nAfter filling empty values with a 0:\n",df)
  
  #manage irrelevent row: consider 'Salary' as irrelevent
  dfna=df.drop(columns=['Salary'])
  print("\nAfter droping irrelevet column(Salary):\n",dfna)
  
  
createcsv()
operations()