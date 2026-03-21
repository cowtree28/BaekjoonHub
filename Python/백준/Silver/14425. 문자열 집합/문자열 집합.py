import sys

n,m = map(int, sys.stdin.readline().split())

arr = set(sys.stdin.readline().rstrip() for _ in range(n))

print(sum(1 for _ in range(m) if sys.stdin.readline().rstrip() in arr))
