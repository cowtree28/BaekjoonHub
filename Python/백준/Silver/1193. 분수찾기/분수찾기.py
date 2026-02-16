
import sys

x = int(sys.stdin.readline().strip())
l = 0
while l < x:
    x -= l
    l += 1
if l % 2 == 0:
    print(x, l - (x - 1), sep="/")
else:
    print(l - (x - 1),x, sep="/")