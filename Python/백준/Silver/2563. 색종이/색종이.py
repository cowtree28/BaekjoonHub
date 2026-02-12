import sys

answer = 0
n = int(sys.stdin.readline().strip())
paper = [[0 for _ in range(100)] for _ in range(100)]
for i in range(n):
    x,y = map(int, sys.stdin.readline().strip().split())
    for j in range(10):
        for k in range(10):
            if(paper[y + k - 1][x + j - 1]==0):
                answer += 1
            paper[y + k - 1][x + j - 1] += 1
print(answer)