s="hello how are you are you fine"
new=s.split()
word_counts = { }
for word in new:
  if word in word_counts:
    word_counts[word] += 1
  else:
    word_counts[word] = 1

print(word_counts)

