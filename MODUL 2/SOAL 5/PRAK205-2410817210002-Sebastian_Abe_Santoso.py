total = []
while len(total) < 2:
    baris = input()
    total.extend(map(float, baris.split()))
A, B = total[:2]
C = ((B * B)-(A*A))**0.5
k = A + B + C
l = 0.5 * A * C
print(f"Alas = {C:.0f}cm")
print(f"Tinggi = {A:.0f}cm")
print(f"Keliling = {k:.0f}cm")
print(f"Luas = {l:.0f}cm^2")