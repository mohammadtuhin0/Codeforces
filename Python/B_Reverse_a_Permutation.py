t = int(input())

for _ in range(t):
    n = int(input())
    lst = list(map(int, input().split()))
    # lexicographicaly benchmark: NOT THE ANEWER
    lst2 = sorted(lst, reverse=True)
    
    # initialize some values 
    l = 0
    r = 0
    val = 0
    
    # inding out where there is a discrepancy
    for i in range(n):
        if lst[i] != lst2[i]:
            val = lst2[i]
            l = i
            break
        
    # find out the index r based on the value
    for i in range(n):
        if lst[i] == val:
            r = i
            break
        
    # build the final list
    ans = []
    for i in range(0, l):
        ans.append(lst[i])
        
    # reversing
    for i in range(r, l-1, -1):
        ans.append(lst[i])
        
    # remaining
    for i in range(r + 1, n):
        ans.append(lst[i])
        
    print(*ans)