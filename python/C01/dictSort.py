my_dict = {2:'apple',1:'banana',4:'cherry',3:'orange'}
asc = dict(sorted(my_dict.items()))
dsc = dict(sorted(my_dict.items(),reverse=True))
print("ascending order: ",asc)
print("descending order: ",dsc)
