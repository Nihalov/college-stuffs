lst=[1,2,3,4,5,6]
print(f"Before removing even numbers: {lst}")
n_lst=[num for num in lst if num%2!=0]
print(f"After removing even numbers: {n_lst}")