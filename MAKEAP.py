n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    if ((x+y)%2 == 0):
        print(int((x+y)/2))
    else:
        print(-1)