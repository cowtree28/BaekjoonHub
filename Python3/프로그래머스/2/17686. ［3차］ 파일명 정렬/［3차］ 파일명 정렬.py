def solution(files):
    answer = []
    for file in files:
        isNum = False
        start = None
        end = len(file)
        for i, c in enumerate(file):
            if c.isdigit() and not isNum:
                start = i
                isNum = True
            elif not c.isdigit() and isNum:
                end = i
                isNum = False
                break
        
        answer.append((file[:start], file[start:end], file))
            
    answer.sort(key=lambda x: (x[0].lower(), int(x[1])))
    answer = [x[2] for x in answer]
    return answer

print(solution(['A10', 'AB20', 'A15.']))
