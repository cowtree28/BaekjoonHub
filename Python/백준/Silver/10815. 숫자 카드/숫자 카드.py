import sys

n = int(sys.stdin.readline().rstrip())
arr = set(map(int, sys.stdin.readline().split()))

n = int(sys.stdin.readline().rstrip())
for i in list(map(int, sys.stdin.readline().split())):
    print(int(i in arr), end=" ")