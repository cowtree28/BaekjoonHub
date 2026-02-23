import sys

n = int(sys.stdin.readline().strip())
stack = []

for _ in range(n):
    cmd = sys.stdin.readline().strip().split()
    if cmd[0] == "push":
        stack.append(cmd[1])
    elif cmd[0] == "pop":
        print(stack.pop() if stack else -1)
    elif cmd[0] == "size":
        print(len(stack))
    elif cmd[0] == "empty":
        print(int(len(stack) == 0))
    elif cmd[0] == "top":
        print(stack[-1] if stack else -1)