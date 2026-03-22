import sys

n,m = map(int, sys.stdin.readline().split())

chess = [sys.stdin.readline().rstrip() for _ in range(n)]

min_square = 64

for i in range(n - 8 + 1):
    for j in range(m - 8 + 1):
        count = 0
        color = chess[i][j]
        for k in range(8):
            for e in range(8):
                now = chess[i+k][j+e]
                if ((k + e) % 2 == 0) == (color == now):
                    count += 1
        count = min(count, 64-count)
        min_square = min(min_square, count)

print(min_square)
