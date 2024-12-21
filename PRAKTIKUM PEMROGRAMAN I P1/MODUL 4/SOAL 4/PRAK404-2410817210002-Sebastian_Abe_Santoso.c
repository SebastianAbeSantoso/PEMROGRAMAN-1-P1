#include <stdio.h>
int main() {
    float NilaiPertama, NilaiKedua;
    int pilih;
    char NAMAANDA[50] = "Sebastian Abe Santoso";
    while (1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilih);
        if (pilih == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s\n", NAMAANDA);
            break;
        }
        if (pilih < 1 || pilih > 5) {
            printf("Input anda salah, silahkan coba lagi.\n");
            continue;
        }
        printf("Masukkan Nilai Pertama: ");
        scanf("%f", &NilaiPertama);
        printf("Masukkan Nilai Kedua : ");
        scanf("%f", &NilaiKedua);
        if (pilih == 1) {
            float Hasil = NilaiPertama + NilaiKedua;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil);
        } else if (pilih == 2) {
            float Hasil = NilaiPertama - NilaiKedua;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil); 
        } else if (pilih == 3) {
            float Hasil = NilaiPertama * NilaiKedua;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil); 
        } else if (pilih == 4) {
            if (NilaiKedua != 0) { 
                float Hasil = NilaiPertama / NilaiKedua;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", NilaiPertama, NilaiKedua, Hasil); 
            } else {
                printf("Error: Tak Terdefinisi\n");
            }
        }
    } return 0;
}