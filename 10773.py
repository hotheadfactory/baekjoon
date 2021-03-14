# https://www.acmicpc.net/problem/10773 Baekjoon No. 10773 제로
k = int(input())
arr = []
for i in range(k):
    x = int(input())
    if x == 0:
        if len(arr) > 0:
            arr.pop()
    else:
        arr.append(x)

print(sum(arr))