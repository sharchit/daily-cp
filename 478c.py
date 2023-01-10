arr = tuple(map(int, input().split()))
arr = sorted(arr)
ans = sum(arr) // 3
if 2 * (arr[0] + arr[1]) <= arr[2]:
    ans = arr[0] + arr[1]
print(ans) 