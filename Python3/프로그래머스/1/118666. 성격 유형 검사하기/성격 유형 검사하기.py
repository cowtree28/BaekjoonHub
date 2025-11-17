category = {"R":1,"T":-1,"C":2,"F":-2,"J":3,"M":-3,"A":4,"N":-4}

def solution(survey, choices):
    answer = ''
    t = [None,0,0,0,0]
    for i in range(len(survey)):
        print(category[survey[i][0]])
        if category[survey[i][0]] < 0:
            t[-1 * category[survey[i][0]]] -= choices[i] - 4
        else:
            t[category[survey[i][0]]] += choices[i] - 4
    print(t)
    if t[1] <= 0:
        answer += 'R'
    else:
        answer += 'T'
    if t[2] <= 0:
        answer += 'C'
    else:
        answer += 'F'
    if t[3] <= 0:
        answer += 'J'
    else:
        answer += 'M'
    if t[4] <= 0:
        answer += 'A'
    else:
        answer += 'N'
    return answer