def solution(record):
    answer = []
    name = {}
    for re in sorted(record, key=lambda x:x.split()[1]):
        r = re.split()
        if r[0] == "Enter" or r[0] == "Change":
            name[r[1]] = r[2]

    for re in record:
        r = re.split()
        if r[0] == "Enter":
            answer.append(f"{name[r[1]]}님이 들어왔습니다.")
        elif r[0] == "Leave":
            answer.append(f"{name[r[1]]}님이 나갔습니다.")
    return answer


print(solution(["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]))