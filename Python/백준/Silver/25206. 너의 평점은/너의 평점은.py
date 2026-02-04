import sys

credits = {"A+":4.5, "A0":4.0, "B+":3.5, "B0":3.0, "C+":2.5, "C0":2.0, "D+":1.5, "D0":1.0, "F":0.0}

subjects = []
for i in range(20):
    subjects.append(input().split())

answer = sum(map(lambda x:credits[x[2]] * float(x[1]), list(filter(lambda x:x[2] != "P", subjects)))) / sum(list(map(lambda x:float(x[1]), filter(lambda x:x[2] != "P", subjects))))
print("%.6f" % answer)