#1
l1=[-2,0,67,8,-88]
l2=[x for x in l1 if x>0]
print("Positive numbers in the list are: ",l2,"\n")

#2
n=int(input("Enter limit to find square: "))
l3=[x**2 for x in range(n+1)]
print("Square of first",n,"numbers are: ",l3,"\n")

#3
word=input("Enter a word: ")
vowels=['a','e','i','o','u']
vow=[x for x in word if x in vowels]
print("Vowels are: ",vow)

#4
ordinal_values=[ord(x) for x in word]
print("Ordinal values of",word,"are",ordinal_values)
