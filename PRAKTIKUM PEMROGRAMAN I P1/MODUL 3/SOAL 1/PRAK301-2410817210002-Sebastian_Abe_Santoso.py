a = []
while len(a) != 3:
    b = input()
    a.extend(map(float, b.split()))
c, d, e = a[:3]
urutan = sorted([c, d, e])
print(f"{urutan[0]:.0f} {urutan[1]:.0f} {urutan[2]:.0f}")