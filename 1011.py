# https://www.acmicpc.net/problem/1011 Baekjoon No. 1011 Fly me to the Alpha Centauri
n = int(input())

for _ in range(n):
    x, y = map(int, input().split())
    distance = y - x
    count = 0
    move = 1
    move_sum = 0
    while move_sum < distance:
        count += 1
        move_sum += move
        if count % 2 == 0:
            move += 1
    print(count)