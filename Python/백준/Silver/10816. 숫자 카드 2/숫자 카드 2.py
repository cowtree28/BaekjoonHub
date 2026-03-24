import sys
from collections import Counter

n = int(sys.stdin.readline().rstrip())
cards = Counter(sys.stdin.readline().split())

m = int(sys.stdin.readline().rstrip())
for c in sys.stdin.readline().split():
    print(cards[c], end=' ')
