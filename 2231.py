# https://www.acmicpc.net/problem/2231 Baekjoon No. 2231 분해합
n = int(input())
answer = 0
for i in range(n-1):
    sum = i
    for j in str(i):
        sum += int(j)
    if sum == n:
        answer = i
        break
print(answer)