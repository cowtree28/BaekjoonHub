import sys

n = int(sys.stdin.readline().strip())
arr = [list(map(int, sys.stdin.readline().strip().split())) for x in range(n)]
arr.sort(key=lambda x: (x[0], x[1]))
for x,y in arr:
    print(x,y)