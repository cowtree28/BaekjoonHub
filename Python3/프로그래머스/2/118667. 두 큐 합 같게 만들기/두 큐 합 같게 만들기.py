import collections

def solution(queue1, queue2):
    queue1 = collections.deque(queue1)
    queue2 = collections.deque(queue2)
    answer = 0
    q1_s = sum(queue1)
    q2_s = sum(queue2)
    limit = max(len(queue1), len(queue2)) * 3
    while True:
        if answer > limit:
            answer = -1
            break
        if q1_s < q2_s:
            temp = queue2.popleft()
            q1_s += temp
            q2_s -= temp
            queue1.append(temp)
        elif q2_s < q1_s:
            temp = queue1.popleft()
            q1_s -= temp
            q2_s += temp
            queue2.append(temp)
        else:
            break
        answer += 1
    return answer