# https://www.acmicpc.net/problem/3052 Baekjoon No. 3052 나머지
arr = []
for i in range(0,10):
    arr.append(int(input()))

answer = len(set(map(lambda x: x % 42, arr)))

print(answer)