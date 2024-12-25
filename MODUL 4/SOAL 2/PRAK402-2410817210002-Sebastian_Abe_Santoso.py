batas = int(input())
for awal in range(1, batas + 1, 2):
    print(awal, end=' ')
print()
for awal in range(batas if batas % 2 == 0 else batas - 1, 1, -2):
    print(awal, end=' ')