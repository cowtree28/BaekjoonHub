import sys

n, m = map(int, sys.stdin.readline().split())

no_listen = set(sys.stdin.readline().strip() for _ in range(n))
no_see = set(sys.stdin.readline().strip() for _ in range(m))

no_listen_see = sorted(no_listen & no_see)
print(len(no_listen_see))
print(*no_listen_see, sep="\n")