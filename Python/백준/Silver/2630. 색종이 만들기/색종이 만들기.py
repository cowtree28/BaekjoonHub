import sys

n = int(sys.stdin.readline().rstrip())

paper = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

blue_paper_count = 0
white_paper_count = 0

s = [(0, 0, n)]
while s:
    y, x, size = s.pop()
    half = size // 2

    color = None
    is_one_paper = False
    for i in range(y, y + size):
        for j in range(x, x + size):
            if color is not None and paper[i][j] != color:
                is_one_paper = True
                break
            elif color is None:
                color = paper[i][j]
        if is_one_paper:
            break
    else:
        if color == 1:
            blue_paper_count += 1
        else:
            white_paper_count += 1
        continue

    s.append((y, x, half))
    s.append((y + half, x, half))
    s.append((y, x + half, half))
    s.append((y + half, x + half, half))

print(white_paper_count)
print(blue_paper_count)
