def to_minute(t):
    h,m = t.split(":")
    return int(h) * 60 + int(m)

def change_code(code):
    code = code.replace("C#","H")
    code = code.replace("D#","I")
    code = code.replace("E#","J")
    code = code.replace("F#","K")
    code = code.replace("G#","L")
    code = code.replace("A#","M")
    code = code.replace("B#","N")
    return code

def solution(m, musicinfos):
    answer = ''
    musics = []
    m = change_code(m)
    for music in musicinfos:
        s_t, e_t, name, code = music.split(",")
        code = change_code(code)
        time = to_minute(e_t) - to_minute(s_t)
        code_len = len(code)
        if m in (code * (time // code_len) + code[:time % code_len + 1]):
            print(m, (code * (time // code_len) + code[:time % code_len + 1]), sep = "\n")
            musics.append(music.split(",") + [time])
    if musics == []:
        answer = "(None)"
    else:
        answer = max(musics, key=lambda x:x[4])[2]
    return answer

print(solution(	"ABC", ["12:00,12:14,HELLO,C#DEFGAB", "13:00,13:05,WORLD,ABCDEF"]))