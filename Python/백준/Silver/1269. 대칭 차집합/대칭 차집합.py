import sys

a,b = map(int, sys.stdin.readline().split())
set_a = set(sys.stdin.readline().split())
set_b = set(sys.stdin.readline().split())

print(len(set_a ^ set_b))
