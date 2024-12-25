baris = list(map(int, input().split()))
baris1, baris2 = baris[:2]
if baris1 != baris2:
    print("Jumlah baris harus sama")
else:
    matriks = []
    for a in range(2):  
        row = list(map(int, input().split()))
        matriks.append(row)
    for c in range(baris2):
        total = matriks[0][c] * matriks[1][c]  
        print(total, end=' ')
    print()