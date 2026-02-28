import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    freq = [0] * (n+1)
    
    for num in arr:
        freq[num] += 1
        
    score = 0
    
    for i in range(1, n+1):
        score += freq[i] // 2
        
    print(score)