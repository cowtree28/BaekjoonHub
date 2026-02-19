import collections
import sys

t = int(sys.stdin.readline().strip())
for _ in range(t):
    p = sys.stdin.readline().strip()
    n = int(sys.stdin.readline().strip())
    temp = sys.stdin.readline().strip("[] \n")
    if temp == "":
        arr = []
    else:
        arr = collections.deque(map(int, temp.split(",")))
    reverse_flag = False
    error_flag = False
    for i in p:
        if i == 'R':
            reverse_flag = not reverse_flag
        elif i == 'D':
            if len(arr) <= 0:
                error_flag = True
                break
            if reverse_flag:
                arr.pop()
            else:
                arr.popleft()
    if error_flag:
        print("error")
        continue
    if reverse_flag:
        arr.reverse()
    print("[", end="")
    print(*list(arr),sep=",",end="")
    print("]")

