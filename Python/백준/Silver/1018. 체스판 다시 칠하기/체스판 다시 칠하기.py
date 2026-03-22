import sys

n,m = map(int, sys.stdin.readline().split())

chess = [sys.stdin.readline().rstrip() for _ in range(n)]

min_square = 64

for i in range(n - 8 + 1):
    for j in range(m - 8 + 1):
        count = 0
        for k in range(8):
            for e in range(8):
                now = chess[i+k][j+e]
                if k == 0 and e == 0:
                    color = now
                    count += 1
                elif (k * 9 + e) % 2 == 0:
                    if color == now:
                        count += 1
                else:
                    if color != now:
                        count += 1

        if count > 32:
            count = 64 - count
        min_square = min(min_square, count)

print(min_square)
