# https://www.acmicpc.net/problem/1912 Baekjoon No. 1912 연속합
n = int(input())
arr = list(map(int, input().split(" ")))
dp = [0 for i in range(n)]

for i in range(0, n):
    dp[i] = max(dp[i - 1] + arr[i], arr[i])

answer = max(dp)

print(answer)