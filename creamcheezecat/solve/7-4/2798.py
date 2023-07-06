""" 
https://www.acmicpc.net/problem/2798<br/>
블랙잭<br/>
2798
"""
import sys
input = sys.stdin.readline

n,m = map(int,input().split())
card = list(map(int,input().split()))

#print(card)

sol = 0
for i in range(n):
    a = card[i]
    for j in range(i+1,n):
        b = card[j]
        for k in range(j+1,n):
            c = card[k]
            if(a+b+c <= m):
                sol = max(sol,a+b+c)
                
print(sol)