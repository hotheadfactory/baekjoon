# https://www.acmicpc.net/problem/15596 Baekjoon No. 15596 정수 N개의 합
def solve(a):
    ans = 0
    for i in a:
        ans += i
    return ans