import sys
import collections
move = ((0, 1), (0, -1), (1, 0), (-1, 0))

m,n = map(int, sys.stdin.readline().split())
boxs = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

q = collections.deque()

for i, box in enumerate(boxs):
    for j, tomato in enumerate(box):
        if tomato == 1:
            q.append((i, j))
while q:
    # print(*visited, sep="\n")
    y, x = q.popleft()
    for dy, dx in move:
        nx, ny = x + dx, y + dy
        if not (0 <= nx < m and 0 <= ny < n):
            continue
        if boxs[ny][nx] == 0:
            q.append((ny, nx))
            boxs[ny][nx] = boxs[y][x] + 1

max_day = -1
for i, v in enumerate(boxs):
    for j, e in enumerate(v):
        if boxs[i][j] == 0:
            print(-1)
            exit(0)
        if max_day < e:
            max_day = e
print(max_day - 1)


