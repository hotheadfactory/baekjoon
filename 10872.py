# https://www.acmicpc.net/problem/10872 Baekjoon No. 10872 팩토리얼
def factorial(n):
    if n <= 1:
        return 1
    return n * factorial(n - 1)


a = int(input())
print(factorial(a))
