# https://www.acmicpc.net/problem/2562 Baekjoon No. 2562 최댓값

arr = []
for i in range(0,9):
    arr.append(int(input()))

maxVal = max(arr)
print(maxVal)
print(arr.index(maxVal)+1)