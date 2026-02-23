import sys

n = int(sys.stdin.readline().strip())
dots = [tuple(map(int, sys.stdin.readline().split())) for _ in range(n)]

dots.sort(key=lambda x: (x[1], x[0]))
for x,y in dots:
    print(x,y)