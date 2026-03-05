import sys

def z(size, r, c):
    if size == 0:
        return 0
    half = 2 ** (size-1)
    if r < half and c < half:
        return z(size - 1, r, c)
    if r < half:
        return half ** 2 + z(size - 1, r, c - half)
    if c < half:
        return half ** 2 * 2 + z(size - 1, r - half, c)
    return half ** 2 * 3 + z(size - 1, r - half, c - half)
    
n, r, c = map(int, sys.stdin.readline().split())

answer = z(n, r, c)
print(answer)