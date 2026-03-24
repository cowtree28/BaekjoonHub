import sys

n = int(sys.stdin.readline().rstrip())
arr = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

arr.sort(key=lambda x:(x[1], x[0]))
count = 0
now = 0
for i in arr:
    if now <= i[0]:
        count += 1
        now = i[1]
print(count)
