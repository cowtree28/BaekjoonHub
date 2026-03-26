import sys

pair = {')':'(', '}':'{', ']':'['}

while True:
    stack = []
    sentence = sys.stdin.readline().rstrip()
    if sentence == ".":
        break
    for i in sentence:
        if i in "({[":
            stack.append(i)
        elif i in ")}]": 
            if not stack:
                print("no")
                break
            else:
                p = stack.pop()
                if pair[i] != p:
                    print("no")
                    break
    else:
        if stack:
            print("no")
        else:
            print("yes")
