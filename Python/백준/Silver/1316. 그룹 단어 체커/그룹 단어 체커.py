import sys

n = int(sys.stdin.readline())
answer = 0
for i in range(n):
    word = sys.stdin.readline()
    alp = []
    now = None
    for j in word:
        if j not in alp:
            alp.append(j)
        if alp[-1] != j:
            break
        now = j
    else:
        answer += 1

print(answer)