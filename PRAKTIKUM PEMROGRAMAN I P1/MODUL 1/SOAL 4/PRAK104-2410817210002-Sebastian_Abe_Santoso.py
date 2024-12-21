a = 400000; b = 350000; x = 13; y = 21; ax = a - a*x/100
by = b - b * y/100; ax = int(ax); by = int(by)
print("Harga sepatu A adalah", a, "\nHarga sepatu B adalah", b)
print(f"Sepatu A mendapat diskon {x:.0f}% sehingga harganya menjadi", ax)
print(f"Sepatu B mendapat diskon {y:.0f}% sehingga harganya menjadi", by)