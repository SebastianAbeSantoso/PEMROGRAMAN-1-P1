a = []
while len(a) != 2:
    b = input()
    a.extend(map(int, b.split()))
n, kelipatan = a[:2]
total = 0
for i in range(1, n + 1):
        baris_total = 0
        print("(", end="")
        for j in range(i, 0, -1):
            hasil = j * kelipatan
            baris_total += hasil
            print(f"{j} * {kelipatan}", end="")
        if j > 1:
            print(" + ", end="")
        print(f") = {baris_total}")
        total += baris_total
print(total)