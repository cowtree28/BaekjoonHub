import sys

n = int(sys.stdin.readline().rstrip())
num = 666

i = 1
while i != n:
    num += 1
    if "666" in str(num):
        i += 1

print(num)
