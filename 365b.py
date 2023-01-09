n = int(input())
arr = list(map(int, input().split()))

max_fib = 2
curr = 2
last = 0
sec = 1

for x in arr[2:]:
    if (x == arr[last] + arr[sec]):
        curr += 1
        max_fib = max(max_fib, curr)
    else:
        curr = 2
    last += 1
    sec += 1

if len(arr) == 1:
    print(1)
else:
    print(max_fib)