#include <stdio.h>
int main(){
    int p1 = 4, p2 = 5, p3 = 7, m = 85000, k = p1 + p2 + p3, b = k * m;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", p1, p2, p3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", m);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp %d", b);
    return 0;
}