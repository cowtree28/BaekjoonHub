import collections
import sys

n = int(sys.stdin.readline().strip())
arr = collections.deque()
for _ in range(n):
    command = list(map(int, sys.stdin.readline().strip().split()))
    if command[0] == 1:
        arr.append(command[1])
    elif command[0] == 2:
        if len(arr) == 0:
            print(-1)
        else:
            print(arr.pop())
    elif command[0] == 3:
        print(len(arr))
    elif command[0] == 4:
        print(int(len(arr) == 0))
    elif command[0] == 5:
        if len(arr) == 0:
            print(-1)
        else:
            print(arr[-1])
