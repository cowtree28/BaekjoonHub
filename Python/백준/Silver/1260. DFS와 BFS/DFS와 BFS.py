import sys
import collections

def dfs(graph, start):
    visited = {k: False for k in graph.keys()}
    stack = [start]

    while stack:
        node = stack.pop()
        if visited[node]:
            continue
        visited[node] = True
        print(node, end=" ")

        neighbors = reversed(graph[node])
        for n in neighbors:
            if not visited[n]:
                stack.append(n)
    print()

def bfs(graph, start):
    visited = {k: False for k in graph.keys()}
    queue = collections.deque([start])
    visited[start] = True

    while queue:
        node = queue.popleft()
        print(node, end=" ")

        neighbors = graph[node]
        for n in neighbors:
            if not visited[n]:
                queue.append(n)
                visited[n] = True
    print()

n, m, v = map(int, sys.stdin.readline().split())
graph = {i: [] for i in range(1, n+1)}
for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)

for i in range(1, n+1):
    graph[i].sort()

dfs(graph, v)
bfs(graph, v)