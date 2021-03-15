# https://www.acmicpc.net/problem/10809 Baekjoon No. 10809 알파벳 찾기
arr = [-1 for i in range(26)]

text = input()

for i in list(text):
    if arr[ord(i)-97] == -1:
        arr[ord(i)-97] = list(text).index(i)
print(" ".join(map(str, arr)))
