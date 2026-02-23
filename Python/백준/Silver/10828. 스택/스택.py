import sys
import collections

n = int(sys.stdin.readline().strip())
arr = collections.deque()

for _ in range(n):
    i = sys.stdin.readline().strip().split()
    if i[0] == "push":
        arr.append(i[1])
    elif i[0] == "pop":
        print(arr.pop() if len(arr) > 0 else -1)
    elif i[0] == "size":
        print(len(arr))
    elif i[0] == "empty":
        print(int(len(arr) == 0))
    elif i[0] == "top":
        print(arr[-1] if len(arr) > 0 else -1)