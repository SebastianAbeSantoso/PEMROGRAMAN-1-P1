#include <stdio.h>
int main(){
    printf("Masukkan Nilai Pertama : "); float N1; scanf("%f", &N1);
    printf("Masukkan Nilai Kedua : "); float N2; scanf("%f", &N2);
    float N3 = N1 + N2;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%g\"", N1, N2, N3);
return 0;
}