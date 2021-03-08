# https://www.acmicpc.net/problem/4344 Baekjoon No. 4344 평균은 넘겠지
n = int(input())

for i in range(n):
    arr = list(map(int, input().split(" ")))
    m = arr[0]
    arr.pop(0)
    avg = sum(arr) / len(arr)
    overAverage = 0
    for j in arr:
        if j > avg:
            overAverage += 1
    print(format((overAverage / len(arr) * 100), ".3f")+"%")