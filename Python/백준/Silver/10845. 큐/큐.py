import sys
from collections import deque

n = int(sys.stdin.readline().rstrip())
q = deque()
for _ in range(n):
    c, *arg = sys.stdin.readline().split()

    match c:
        case "push":
           q.append(arg[0])
        case "pop":
            print(q.popleft() if q else -1)
        case "size":
            print(len(q))
        case "empty":
            print(int(not bool(q)))
        case "front":
            print(q[0] if q else -1)
        case "back":
            print(q[-1] if q else -1)

