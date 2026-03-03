import sys
import collections
dx = (0, 0, 1, -1)
dy = (1, -1, 0, 0)

m,n = map(int, sys.stdin.readline().split())
boxs = tuple(tuple(map(int, sys.stdin.readline().split())) for _ in range(n))

q = collections.deque()
visited = [[-1 for _ in range(m)] for _ in range(n)]

for i, box in enumerate(boxs):
    for j, tomato in enumerate(box):
        if tomato == 1:
            q.append((i, j))
            visited[i][j] = 0
while q:
    # print(*visited, sep="\n")
    y, x = q.popleft()
    for i in range(len(dx)):
            if x + dx[i] >= m or x + dx[i] < 0 or y + dy[i] >= n or y + dy[i] < 0:
                continue
            if boxs[y+dy[i]][x+dx[i]] == 0 and visited[y+dy[i]][x+dx[i]] == -1:
                q.append((y+dy[i], x+dx[i]))
                visited[y+dy[i]][x+dx[i]] = visited[y][x] + 1

max_day = -1
no_way = False
for i, v in enumerate(visited):
    for j, e in enumerate(v):
        if e == -1 and boxs[i][j] == 0:
            no_way = True
            break
        if max_day < e:
            max_day = e
print(-1 if no_way else max_day)


