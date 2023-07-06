""" 
https://www.acmicpc.net/problem/10974<br/>
모든순열<br/>
10974
"""

import sys
input = sys.stdin.readline


def fun(n, result):
    if n == 0:
        print(' '.join(map(str, result)))
    else:
        for i in range(1, N + 1):
            if i not in result:
                result.append(i)
                fun(n - 1, result)
                result.pop()

N = int(input())
fun(N, [])

