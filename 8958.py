# https://www.acmicpc.net/problem/8958 Baekjoon No. 8958 OX퀴즈
n = int(input())

for i in range(n):
    arr = list(input())
    dp = [0 for i in range(len(arr))]
    if arr[0] == 'O':
        dp[0] = 1
    for j in range(1, len(arr)):
        if arr[j] == "O":
            dp[j] = dp[j-1]+1
    print(sum(dp))