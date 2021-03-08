# https://www.acmicpc.net/problem/16639 Baekjoon No. 16639 괄호 추가하기 3
def calculate(operator, op1, op2):
    if operator == "+":
        return op1 + op2
    elif operator == "-":
        return op1 - op2
    elif operator == "*":
        return op1 * op2
input()
number = []
operator = [" "]
arr = list(input())
number.append(int(arr[0]))
arr.pop(0)
while len(arr) > 0:
    operator.append(arr[0])
    arr.pop(0)
    number.append(int(arr[0]))
    arr.pop(0)
dp_max = [[-2147483648 for i in range(len(number))] for i in range(len(number))]
dp_min = [[2147483647 for i in range(len(number))] for i in range(len(number))]
for k in range(len(number)):
    dp_max[k][k] = dp_min[k][k] = number[k]
for i in range(1, len(number)):
    for j in range(len(number) - i):
        k = j + i
        for x in range(j, k):
            dp_max[j][k] = max(dp_max[j][k], calculate(operator[x+1], dp_max[j][x], dp_max[x+1][k]))
            dp_max[j][k] = max(dp_max[j][k], calculate(operator[x+1], dp_max[j][x], dp_min[x+1][k]))
            dp_max[j][k] = max(dp_max[j][k], calculate(operator[x+1], dp_min[j][x], dp_max[x+1][k]))
            dp_max[j][k] = max(dp_max[j][k], calculate(operator[x+1], dp_min[j][x], dp_min[x+1][k]))

            dp_min[j][k] = min(dp_min[j][k], calculate(operator[x+1], dp_max[j][x], dp_max[x+1][k]))
            dp_min[j][k] = min(dp_min[j][k], calculate(operator[x+1], dp_max[j][x], dp_min[x+1][k]))
            dp_min[j][k] = min(dp_min[j][k], calculate(operator[x+1], dp_min[j][x], dp_max[x+1][k]))
            dp_min[j][k] = min(dp_min[j][k], calculate(operator[x+1], dp_min[j][x], dp_min[x+1][k]))

print(dp_max[0][-1])
