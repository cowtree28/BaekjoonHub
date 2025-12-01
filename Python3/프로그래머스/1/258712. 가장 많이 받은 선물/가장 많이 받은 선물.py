def solution(friends, gifts):
    friends_index = {}
    for i in range(len(friends)):
        friends_index[friends[i]] = i

    gr = [[0 for x in range(len(friends))] for x in range(len(friends))]
    score = [0 for x in range(len(friends))]
    answer = 0

    for gift in gifts:
        g, r = gift.split()
        score[friends_index[g]] += 1
        score[friends_index[r]] -= 1
        gr[friends_index[g]][friends_index[r]] += 1

    for i in friends:
        present = 0
        for j in friends:
            if i == j:
                continue
            if gr[friends_index[i]][friends_index[j]] > gr[friends_index[j]][friends_index[i]]:
                present += 1
                continue
            if gr[friends_index[i]][friends_index[j]] == gr[friends_index[j]][friends_index[i]] and score[friends_index[i]] > score[friends_index[j]]:
                present += 1
                continue
        if answer < present:
            answer = present

    return answer
