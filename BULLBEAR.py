n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    if(x > y):
        print("LOSS")
    elif(x == y):
        print("NEUTRAL")
    else:
        print("PROFIT")