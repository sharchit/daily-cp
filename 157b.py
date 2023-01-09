from math import pi

n = int(input())
arr = list(map(float, input().split()))
arr = sorted(arr)

area = 0
if(n % 2):
    area += pi * arr[0]**2
    i = 1
    while(i < len(arr)):
        if not (i % 2):
            area += (arr[i]**2 -arr[i - 1]**2) * pi
        i += 1
else:
    i = 1
    while(i < len(arr)):
        if (i % 2):
            area += (arr[i]**2 -arr[i - 1]**2) * pi
        i += 1
print(area)