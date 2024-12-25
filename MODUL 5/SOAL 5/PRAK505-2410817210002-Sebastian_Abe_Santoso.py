def biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    print(f"Perkenalkan Nama Saya : {Namaku}")
    print(f"Umur saya : {tahun_sekarang - tahunLahir}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya Dari : {Asal}")
tahunLahir = int(input())
namaku = input()
asal = input()
biodata(tahunLahir, namaku, asal)