import sys

n = int(sys.stdin.readline().rstrip())
arr = set(sys.stdin.readline().split())

n = int(sys.stdin.readline().rstrip())
for i in sys.stdin.readline().split():
    print(int(i in arr), end=" ")

