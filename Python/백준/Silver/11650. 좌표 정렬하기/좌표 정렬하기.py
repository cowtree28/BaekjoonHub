import sys

n = int(sys.stdin.readline().strip())
arr = [tuple(map(int, sys.stdin.readline().split())) for x in range(n)]
arr.sort()
for x,y in arr:
    print(x,y)