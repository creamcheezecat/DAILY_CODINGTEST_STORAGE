""" 
https://www.acmicpc.net/problem/1062<br/>
가르침<br/>
1062
"""
import sys
sys.setrecursionlimit(1000000)
input = sys.stdin.readline

n, m = map(int, input().split())

learn = []
ahp = [0 for _ in range(26)]
if m < 5:
    print(0)
else:
    for _ in range(n):
        word = input().rstrip()
        for i in word:
            if i == 'a' or i == 'n' or i == 't' or i == 'i' or i == 'c':
                continue
            learn.append(i)
    
    def count_words(letters, words):
        count = 0
        for word in words:
            if set(word).issubset(letters):
                count += 1
        return count
    
    def learn_letters(letters, idx, k, words, max_count):
        if k == 0:
            max_count = max(max_count, count_words(letters, words))
            return max_count
    
        for i in range(idx, 26):
            if chr(ord('a') + i) in letters:
                continue
            letters.add(chr(ord('a') + i))
            max_count = learn_letters(letters, i + 1, k - 1, words, max_count)
            letters.remove(chr(ord('a') + i))
    
        return max_count
    
    k = m - 5
    initial_letters = set('antic')
    max_count = learn_letters(initial_letters, 0, k, learn, 0)
    print(max_count)
    
    



# if m < 5:
#     print(0)
# else:
#     words = []
#     for _ in range(n):
#         word = set(input().rstrip())
#         words.append(word)
#     sol = 0
#     for word in words:
#         word.remove('a')
#         word.remove('n')
#         word.remove('t')
#         word.remove('i')
#         word.remove('c')
#         if(len(word) <= m-5):
#             sol += 1
#     print(sol)