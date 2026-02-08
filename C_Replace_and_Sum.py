import sys
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n, q = map(int, input().split())
    
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    best = [0] * n
    best[n - 1] = b[n - 1]
    
    for i in range(n - 2, -1, -1):
        best[i] = max(b[i], best[i + 1])
        
    
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i + 1] = prefix[i] + best[i]
        
        
    result = []
    for _ in range(q):
        l, r = map(int, input().split())
        result.append(str(prefix[r] - prefix[l - 1]))
        
    print(" ".join(result))