import sys
n,m = map(int, sys.stdin.readline().strip().split())
arr = list(map(int, sys.stdin.readline().strip().split()))

pre_max = [0]
for i, e in enumerate(arr):
    pre_max.append(pre_max[i] + e)
for i in range(m):
    s,e = map(int, sys.stdin.readline().strip().split())
    print(pre_max[e] - pre_max[s-1])