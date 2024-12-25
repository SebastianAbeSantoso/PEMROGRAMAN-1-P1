NAMAANDA = "Sebastian Abe Santoso"
while True:
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    pilih = int(input("Masukkan Pilihan : "))
    if pilih == 5:
        print("Terimakasih, telah menggunakan kalkulator", NAMAANDA)
        break
    if pilih > 5 or pilih < 1:
        print("Input anda salah, silahkan coba lagi.")
        continue
    NilaiPertama = float(input("Masukkan Nilai Pertama: "))
    NilaiKedua = float(input("Masukkan Nilai Kedua: "))
    if pilih == 1:
        Hasil = NilaiPertama + NilaiKedua
        print(f"Hasil penjumlahan antara {NilaiPertama:.2f} dan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif pilih == 2:
        Hasil = NilaiPertama - NilaiKedua
        print(f"Hasil pengurangan antara {NilaiPertama:.2f} dan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif pilih == 3:
        Hasil = NilaiPertama * NilaiKedua
        print(f"Hasil perkalian antara {NilaiPertama:.2f} dan {NilaiKedua:.2f} adalah {Hasil:.2f}")
    elif pilih == 4:
        if NilaiKedua != 0:
            Hasil = NilaiPertama / NilaiKedua
            print(f"Hasil pembagian antara {NilaiPertama:.2f} dan {NilaiKedua:.2f} adalah {Hasil:.2f}")
        else:
            print("Error: Tak Terdefinisi (Pembagian dengan nol)")