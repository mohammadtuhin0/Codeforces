n = int(input())
arr = list(map(int, input().split()))

min_value = arr[0]  
position = 1

for i in range(n):
    if arr[i] < min_value:
        min_value = arr[i]
        position = i + 1
        
print(f"Minimum value: {min_value}, position : {position}")