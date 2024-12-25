besar = int(input())
matriksa = []; matriksb = []
print("Matriks A")
for i in range(besar):
    matriksa.append(list(map(int, input().split())))
print("Matriks B")
for i in range(besar):
    matriksb.append(list(map(int, input().split())))
hasil = [[0 for i in range(besar)] for i in range(besar)]
for i in range(besar):
    for j in range(besar):
        for k in range(besar):
            hasil[i][j] += matriksa[i][k] * matriksb[k][j]
for barisan in hasil:
    print(*barisan)