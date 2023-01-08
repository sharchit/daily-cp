r, c = map(int, input().split())
rows = set()
cols = set()
for i in range(r):
    row = input()
    for j in range(len(row)):
        if row[j] == 'S':
            rows.add(i)
            cols.add(j)
edible = 0
if(r >= c):
    edible += c * (r -len(rows))
    edible += len(rows) * (c - len(cols))
else:
    edible += r * (c -len(cols))
    edible += len(cols) * (r - len(rows))
print(edible)