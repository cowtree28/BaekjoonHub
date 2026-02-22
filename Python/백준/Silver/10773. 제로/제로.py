import collections
import sys

k = int(sys.stdin.readline().strip())
arr = collections.deque()

for _ in range(k):
    temp = int(sys.stdin.readline().strip())
    if temp == 0:
        arr.pop()
    else:
        arr.append(temp)
print(sum(arr))