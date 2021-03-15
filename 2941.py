# https://www.acmicpc.net/problem/2941 Baekjoon No. 2941 크로아티아 알파벳
inp = input()
croatianAlphabet = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for i in croatianAlphabet:
    inp = inp.replace(i, '_')

print(len(inp))