#include <stdio.h>
int main(){
    float r, t;
    scanf("%f %f", &r, &t);
    float vt = 22.0/7.0 * r * r * t;
    float lt = 2.0 * 22.0/7.0 * r * t + 2 * 22.0/7.0 * r * r;
    float kt = 2.0 * 22.0/7.0 * r;
    printf("Volume = %.2f\n", vt);
    printf("Luas = %.2f\n", lt);
    printf("Keliling = %.2f\n", kt);
return 0;
}