n = int(input())
for _ in range(n):
    x, y, k = map(int, input().split())
    ans = abs(y - x) // k
    if(abs(y-x) % k != 0):
        ans += 1
    print(ans)