semua = []
while len(semua) != 6:
    baris = input()
    semua.extend(map(float, baris.split()))
a, b, i, j, x, y = semua[:6]
hasil = (a-b)*(i/j)-(x+y)
print(f"{hasil:.3f}")