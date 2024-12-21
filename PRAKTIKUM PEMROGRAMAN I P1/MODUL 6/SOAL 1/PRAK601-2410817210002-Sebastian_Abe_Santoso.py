baris,kolom=map(int, input().split())
matriks = list(map(int, input().split()))
for i in range(baris):
    print(*matriks[i*kolom:(i+1)*kolom])