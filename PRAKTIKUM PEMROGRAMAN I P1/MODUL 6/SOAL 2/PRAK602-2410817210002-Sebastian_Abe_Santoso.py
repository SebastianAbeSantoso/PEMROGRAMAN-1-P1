def zetsu(b, n):
    for i in range(n):
        b[i] = b[i] * (i + 1)
ruang = int(input(""))
b = list(map(int, input().split()))
if len(b) != ruang:
    print("Error: Nomor diatas batas")
else:
    zetsu(b, ruang)
    for i in range(ruang):
        print(b[i], end=' ')