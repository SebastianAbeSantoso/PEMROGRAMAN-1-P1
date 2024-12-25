#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a < 0 || a > 99){
        printf("Anda Menginput Melebihi Nilai Bilangan");
    } else if (a == 0){
        printf("Nol");
    } else if (a > 0 && a < 10){
        printf("Satuan");
    } else if (a = 10 || a > 19){
        printf("Puluhan");
    } else if (a > 10 && a < 20){
        printf("Belasan");
    } else { printf("Anda Menginput Melebihi Nilai Bilangan");
    }
    return 0;
}