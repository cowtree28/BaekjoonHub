import sys
import math
n = int(sys.stdin.readline().rstrip())

five = 0
two = 0
for i in range(2, n + 1):
    while True:
        if i % 5 == 0:
            i /= 5
            five += 1
        elif i % 2 == 0:
            i /= 2
            two += 1
        else:
            break
print(int(min(two, five)))
