def hitung(nilai1, nilai2):
    return nilai1 - nilai2;
def mutlak(angka):
    return abs(angka)
a = None; b = None; c = None; d = None; e = []
e = list(map(int, input().split()))
a, b, c, d = e[:4]
Hasil = hitung(a,c) + hitung(b,d);
print(mutlak(Hasil));