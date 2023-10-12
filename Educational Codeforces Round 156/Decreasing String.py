t = int(input())
for i in range(0, t):
    s1 = input()
    pos = int(input())
    S = s1
    s = s1
    while len(s) > 0:
        for char in s:
            if char == S[0]:
                continue
            if s[0] > char:
                s = s.replace(char, '')
        S += s
    print(S[-pos], end='')
