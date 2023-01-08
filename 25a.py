n = int(input())
arr = list(map(int, input().split()))
even = 0
odd = 0
last_even = 0
last_odd = 0
for i in range(n):
    if arr[i] % 2:
        odd += 1
        last_odd = i + 1
    else:
        even += 1
        last_even = i + 1
    
print(last_even) if even == 1 else print(last_odd)