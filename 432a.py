n, k = map(int, input().split())
arr = list(map(int, input().split()))

memElg = 0
for i in arr:
    if(i + k <= 5):
        memElg += 1

print(memElg // 3)