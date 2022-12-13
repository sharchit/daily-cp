n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    if(x >= 2*y):
        print("YES")
    else:
        print("NO")