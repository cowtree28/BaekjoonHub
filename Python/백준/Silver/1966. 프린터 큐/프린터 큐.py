import sys
import collections

t = int(sys.stdin.readline().strip())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().split())
    doc = collections.deque(enumerate(map(int , sys.stdin.readline().split())))
    p = (None, None)
    printed = False
    i = 0
    while not printed or p[0] != m:
        p = doc[0]

        if len(doc) != 0 and max(doc, key=lambda x: x[1]) != p:
            printed = False
            doc.append(doc.popleft())
            continue
        doc.popleft()
        printed = True
        i += 1

    print(i)