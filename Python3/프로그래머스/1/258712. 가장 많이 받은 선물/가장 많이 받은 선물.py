def solution(friends, gifts):
    answer = 0
    present = [0 for x in friends]
    gift_jisoo = [0 for x in friends]
    for gift in gifts:
        se,re = gift.split()
        gift_jisoo[friends.index(se)] += 1
        gift_jisoo[friends.index(re)] -= 1
    len_friend = len(friends)
    for i in range(len_friend):
        for j in range(i,len_friend):
            if i == j:
                continue
            gift_sum = None
            plus = gifts.count(' '.join([friends[i], friends[j]]))
            minus = gifts.count(' '.join([friends[j], friends[i]]))
            if plus > 0 and minus > 0:
                gift_sum = 0
                gift_sum += plus
                gift_sum -= minus
            elif plus > 0:
                gift_sum = plus
            elif minus > 0:
                gift_sum = -minus
            if gift_sum == None:
                if(gift_jisoo[i] > gift_jisoo[j]):
                    present[i] += 1
                elif(gift_jisoo[i] < gift_jisoo[j]):
                    present[j] += 1
            elif gift_sum > 0:
                present[i] += 1
            elif gift_sum < 0:
                present[j] += 1
            else:
                if(gift_jisoo[i] > gift_jisoo[j]):
                    present[i] += 1
                elif(gift_jisoo[i] < gift_jisoo[j]):
                    present[j] += 1
    return max(present)