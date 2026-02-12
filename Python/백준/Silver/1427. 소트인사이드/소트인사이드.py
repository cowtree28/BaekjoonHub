import sys
input = sys.stdin.readline
n_str = input().strip()
arr = sorted([x for x in n_str], reverse=True)
print("".join(arr))