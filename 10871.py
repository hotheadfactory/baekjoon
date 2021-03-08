# https://www.acmicpc.net/problem/10871 Baekjoon No. 10871 X보다 작은 수
value = input().split(" ")
arr = []
value2 = input().split(" ")
answer = []

for i in value2:
    if int(i) < int(value[1]):
        answer.append(i)

print(" ".join(answer))