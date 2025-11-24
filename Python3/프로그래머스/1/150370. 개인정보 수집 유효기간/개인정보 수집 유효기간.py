# 형식은 yyyy.mm.dd
def compareDate(date1, date2):
    date1 = date1.split('.')
    date2 = date2.split('.')
    for i in range(3):
        if int(date1[i]) < int(date2[i]):
            return -1
        elif int(date1[i]) > int(date2[i]):
            return 1
        elif i == 2:
            return 0

def sumDate(date,month):
    date = date.split('.')
    year = int(date[0])
    mon = int(date[1])
    
    year += (mon + month - 1) // 12
    mon = (mon + month - 1) % 12 + 1
    
    date[0] = f"{year:04d}"
    date[1] = f"{mon:02d}"
    
    return '.'.join(date)

        

def solution(today, terms, privacies):
    answer = []
    term_parse = {}
    for i in terms:
        term_parse[i[0]] = int(i[2:])
    for i in range(len(privacies)):
        print(privacies[i][:10])
        print(term_parse[privacies[i][11]])
        if compareDate(sumDate(privacies[i][:10], term_parse[privacies[i][11]]),today) <= 0:
            answer.append(i+1)
    return answer