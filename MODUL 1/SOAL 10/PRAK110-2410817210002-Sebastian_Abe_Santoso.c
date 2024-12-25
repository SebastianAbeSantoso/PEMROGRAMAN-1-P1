#include <stdio.h>
#include <math.h>
int main(){
    int a = 5, t = 12, m = sqrt(a*a + t*t), l = (a*t)/2, k = a+t+m;
    printf("Diketahui : \n"); printf("Alas = %dcm\n", a);
    printf("Tinggi = %dcm\n", t); printf("\nJawab : \n");
    printf("Sisi A = %dcm\n", t); printf("Sisi B = %dcm\n", m);
    printf("Sisi C = %dcm\n", a); printf("Keliling = %dcm\n", k);
    printf("Luas = %dcm", l);
    return 0;
}