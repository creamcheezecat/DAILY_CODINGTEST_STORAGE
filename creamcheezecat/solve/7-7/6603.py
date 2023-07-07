""" 
https://www.acmicpc.net/problem/6603<br/>
로또<br/>
6603
"""

from itertools import combinations
import sys
input = sys.stdin.readline

def fun(arr):
    ncount = len(arr)
    result = [0] * 6
    for combination in combinations(arr, 6):
        result[:6] = combination

        # 조합 출력
        print(*result)


while(1):
    tc = list(map(int,input().split()))
    if tc[0]== 0:
        break
    del tc[0]
    
    fun(tc)
    print()
    
    
#print(tc)

# 비트 마스크 를 이용한 풀이
def setprintf(arr):
    n = len(arr)
    result = []

    for bitmask in range(1 << n):
        if bin(bitmask).count('1') == 6:
            combination = [arr[i] for i in range(n) if bitmask & (1 << i)]
            print(*combination)
            
# 재귀를 이용한 풀이
def generate_combinations(arr, indices, depth, selected, result):
    if selected == depth:
        for i in range(len(arr)):
            if indices[i]:
                result.append(arr[i])
        print(*result)
        result.pop()
        return

    if depth == 0:
        start = 0
    else:
        start = indices.index(1, result[-1] + 1)

    for i in range(start, len(arr)):
        indices[i] = 1
        result.append(arr[i])
        generate_combinations(arr, indices, depth, selected + 1, result)
        indices[i] = 0
        result.pop()

def setprintf(arr):
    n = len(arr)
    result = []
    indices = [0] * n

    generate_combinations(arr, indices, 6, 0, result)