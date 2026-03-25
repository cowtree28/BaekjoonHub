import sys

while True:
    stack = []
    sentence = sys.stdin.readline().rstrip()
    if sentence == ".":
        break
    for i in sentence:
        if i in ['(', '{', '[']:
            stack.append(i)
        elif i in [')', '}', ']']:
            if not stack:
                print("no")
                break
            else:
                p = stack.pop()
                match i:
                    case ')':
                        if p != '(':
                            print("no")
                            break
                    case '}':
                        if p != '{':
                            print("no")
                            break
                    case ']':
                        if p != '[':
                            print("no")
                            break

    else:
        if stack:
            print("no")
        else:
            print("yes")

