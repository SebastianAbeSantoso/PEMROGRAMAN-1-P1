#include <stdio.h>
int main(){
    int  a = 400000, b = 350000, x = 13, y = 21, ax = a - a*x/100, by = b - b * y/100;
    printf("Harga sepatu A adalah %d\nHarga sepatu B adalah %d\n", a,b);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", x, ax);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", y, by);
    return 0;
}