croatia = ["dz=","c=","c-","d-","lj","nj","s=","z="]

word = input()
for i in croatia:
    word = word.replace(i,"1")
print(len(word))