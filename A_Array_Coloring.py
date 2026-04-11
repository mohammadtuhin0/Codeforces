t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    pos = {}
    for i in range(n):
        pos[arr[i]] = i
        
    ok = True
    
    for i in range(1, n):
        if abs(pos[i] - pos[i+1]) % 2 == 0:
            ok = False
            break
        
    if ok:
        print("YES")
    else:
        print("NO")