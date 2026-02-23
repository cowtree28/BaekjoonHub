import sys

n = int(sys.stdin.readline().strip())
arr = set([sys.stdin.readline().strip() for _ in range(n)])
for x in sorted(arr, key=lambda x:(len(x), x)):
    print(x)
