def getNumAndPoint(n, p):
    num = -1
    i = 1
    j = 0
    while(p > 0):
        if(j == n ** i):
            i += 1
            continue
        p -= i
        num += 1
        j += 1
    p = (p + i - 1) % i
    return (num, p)
        
def to_base(n, base):
    if n == 0:
        return "0"
    digits = "0123456789ABCDEF"
    res = ""
    while n > 0:
        res = digits[n % base] + res
        n //= base
    return res
    
def solution(n, t, m, p):
    answer = ''
    for i in range(p, p + m * t, m):
        num, point = getNumAndPoint(n,i)
        print(to_base(num, n)[point])
        answer += to_base(num, n)[point]
    
    return answer