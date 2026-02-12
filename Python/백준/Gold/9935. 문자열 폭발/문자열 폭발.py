import sys

s = sys.stdin.readline().strip()
bomb = sys.stdin.readline().strip()
answer = []
for i in s:
    answer.append(i)
    if answer[-len(bomb):] == [*bomb]:
        del answer[-len(bomb):]

if answer == []:
    print("FRULA")
else:
    print("".join(answer))