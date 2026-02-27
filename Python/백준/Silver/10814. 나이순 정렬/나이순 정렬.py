import sys

n = int(sys.stdin.readline().rstrip())
students = [sys.stdin.readline().split() for _ in range(n)]

students.sort(key = lambda x: int(x[0]))
for i, n in students:
    print(i, n)