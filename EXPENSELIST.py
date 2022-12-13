n = int(input())
for _ in range(n):
    n, x = map(int, input().split())
    print(2**(x-n))