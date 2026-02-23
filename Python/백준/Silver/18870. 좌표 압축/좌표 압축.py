import sys

n = int(sys.stdin.readline().strip())

dots = list(map(int, sys.stdin.readline().split()))
rank_dict = {v: i for i, v in enumerate(sorted(set(dots)))}

print(*(rank_dict[dot] for dot in dots))