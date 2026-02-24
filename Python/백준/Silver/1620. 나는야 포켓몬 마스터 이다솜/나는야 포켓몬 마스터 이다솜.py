import sys

n, m = map(int, sys.stdin.readline().split())
guide_num = {i: sys.stdin.readline().strip() for i in range(1, n + 1)}
guide_str = {v: k for k, v in guide_num.items()}

for _ in range(m):
    s = sys.stdin.readline().strip()
    if s.isdigit():
        print(guide_num[int(s)])
    else:
        print(guide_str[s])