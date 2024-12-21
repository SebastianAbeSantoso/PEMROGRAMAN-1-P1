total = []
while len(total) < 2:
    baris = input()
    total.extend(map(float, baris.split()))
r, t = total[:2]
vt = 22/7 * r * r * t
lt = 2 * 22/7 * r * t + 2 * 22/7 * r * r;
kt = 2 * 22/7 * r;
print(f"Volume = {vt:.2f}")
print(f"Luas = {lt:.2f}")
print(f"Keliling = {kt:.2f}")