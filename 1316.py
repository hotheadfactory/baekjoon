# https://www.acmicpc.net/problem/1316 Baekjoon No. 1316 그룹 단어 체커
n = int(input())
answer = 0
for i in range(n):
    inp = list(input())
    arr = [0 for i in range(26)]
    flag = 0
    for i in range(len(inp)):
        if arr[ord(inp[i]) - 97] == 0:
            arr[ord(inp[i]) - 97] = 1
        elif arr[ord(inp[i]) - 97] == 1:
            if i != 0 and inp[i-1] != inp[i]:
                flag = 1
    if flag == 0:
        answer += 1
print(answer)
