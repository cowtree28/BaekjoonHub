import sys

t = int(sys.stdin.readline().rstrip())

for _ in range(t):
    ps = sys.stdin.readline().rstrip()
    s = []
    is_vps = True
    for c in ps:
        if c == '(':
            s.append(c)
        if c == ')':
            if len(s) == 0:
                is_vps = False
                break
            s.pop()
    if len(s) != 0:
        is_vps = False
    print("YES" if is_vps else "NO")