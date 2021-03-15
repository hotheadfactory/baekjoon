# https://www.acmicpc.net/problem/5622 Baekjoon No. 5622 다이얼
dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
a = input()
answer = 0
for j in range(len(a)):
    for i in dial:
        if a[j] in i:
            answer += dial.index(i)+3
print(answer)
