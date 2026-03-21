import sys

n,m = map(int, sys.stdin.readline().split())

arr = set(sys.stdin.readline().rstrip() for _ in range(n))

word_count = 0
for i in range(m):
    if sys.stdin.readline().rstrip() in arr:
        word_count += 1

print(word_count)
