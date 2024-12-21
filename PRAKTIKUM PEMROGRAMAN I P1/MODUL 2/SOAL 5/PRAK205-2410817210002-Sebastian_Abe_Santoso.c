#include <stdio.h>
#include <math.h>
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int C = sqrt((B * B)-(A*A));
    int k = A + B + C;
    int l = 0.5 * A * C;
    printf("Alas = %dcm\n", C);
    printf("Tinggi = %dcm\n", A);
    printf("Keliling = %dcm\n", k);
    printf("Luas = %dcm^2\n", l);
return 0;
}