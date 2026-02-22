import sys
import collections

n = int(sys.stdin.readline().strip())
adj = [[] for _ in range(n + 1)]
for _ in range(n - 1):
    a,b = map(int, sys.stdin.readline().strip().split())
    adj[a].append(b)
    adj[b].append(a)

parents = [0 for _ in range(n + 1)]

def bfs(adj, parent, start):
    q = collections.deque([start])
    parents[start] = 1
    while q:
        node = q.popleft()
        for i in adj[node]:
            if parent[i] == 0:
                parents[i] = node
                q.append(i)

bfs(adj, parents, 1)

for i in range(2, n + 1):
    print(parents[i])