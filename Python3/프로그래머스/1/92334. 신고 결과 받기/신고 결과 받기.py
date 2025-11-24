def solution(id_list, report, k):
    answer = [0 for x in id_list]
    id_dict = {}
    for id in id_list:
        id_dict[id] = 0
    report = list(dict.fromkeys(report))
    for r in report:
        re, su = r.split()
        id_dict[su] += 1
    for i in range(len(report)):
        re, su = report[i].split()
        for j in range(len(id_list)):
            if id_list[j] == re and id_dict[su] >= k:
                answer[j] += 1
    return answer