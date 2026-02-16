import sys
a1, a0 = map(int, sys.stdin.readline().strip().split())
c = int(sys.stdin.readline().strip())
n = int(sys.stdin.readline().strip())
print(int(a1 * n + a0 <= c * n and a1 <= c))