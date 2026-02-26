import sys
import collections

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

n,m = map(int, sys.stdin.readline().split())
maze = [[int(x) for x in sys.stdin.readline().rstrip()] for _ in range(n)]

visited = [[-1 for _ in range(m)] for _ in range(n)]

q = collections.deque([(0, 0)])
visited[0][0] = 1
while q:
    x, y = q.popleft()
    for i in range(len(dx)):
        if y + dy[i] < 0 or y + dy[i] >= n or x + dx[i] < 0 or x + dx[i] >= m:
            continue
        if maze[y + dy[i]][x + dx[i]] == 1 and visited[y + dy[i]][x + dx[i]] == -1:
            # print(f"x : {x}, y : {y}\nx + dx[i] : {x + dx[i]}, y + dy[i] : {y + dy[i]}")
            q.append((x + dx[i], y + dy[i]))
            visited[y + dy[i]][x + dx[i]] = visited[y][x] + 1

# print(*visited, sep="\n")
print(visited[n - 1][m - 1])