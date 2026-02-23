import sys

n = int(sys.stdin.readline().strip())

dots = list(map(int, sys.stdin.readline().split()))
dict = {}
for i, v in enumerate(sorted(set(dots))):
    dict[v] = i

for v in dots:
    print(dict[v], end = ' ')