import sys
input = sys.stdin.readline().strip
n_str = input()
arr = list(map(int, [x for x in n_str]))
arr.sort(reverse=True)
print("".join(map(str, arr)))