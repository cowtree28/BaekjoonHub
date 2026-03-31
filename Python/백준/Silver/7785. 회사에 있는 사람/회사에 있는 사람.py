import sys

n = int(sys.stdin.readline().rstrip())

s = set([])
for i in range(n):
    name, access = sys.stdin.readline().split()

    match access:
        case "enter":
            s.add(name)
        case "leave":
            s.discard(name)

print(*(sorted(s, reverse=True)), sep="\n")
