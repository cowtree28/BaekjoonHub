def getbit(value, bit_locate, n):
    return (value & (2**(n-bit_locate-1))) == (2**(n-bit_locate-1))

def solution(n, arr1, arr2):
    answer = []
    for i in range(n):
        answer.append("")
    for i in range(n):
        for j in range(n):
            if(getbit(arr1[i],j,n) or getbit(arr2[i],j,n)):
                answer[i] += '#'
            else:
                answer[i] += ' '
                
    return answer