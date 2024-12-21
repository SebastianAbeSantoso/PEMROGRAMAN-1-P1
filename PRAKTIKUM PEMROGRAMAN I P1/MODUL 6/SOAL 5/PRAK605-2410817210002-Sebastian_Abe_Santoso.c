#include <stdio.h>
int main(){
    int besar;
    scanf("%d", &besar);
    int matriksa[besar][besar];
    int matriksb[besar][besar];
    int hasil[besar][besar];
    printf("Matriks A\n");
    for (int a = 0; a < besar; a++){
        for (int b = 0; b < besar; b++){
            scanf("%d", &matriksa[a][b]);
        }
    } printf("Matriks B\n");
    for (int c = 0; c < besar; c++){
        for (int d = 0; d < besar; d++){
            scanf("%d", &matriksb[c][d]);
        }
    } printf("Matriks AXB\n");
    for (int e = 0; e < besar; e++) {
        for (int f = 0; f < besar; f++) {
            hasil[e][f] = 0;
            for (int g = 0; g < besar; g++) {
                hasil[e][f] += matriksa[e][g] * matriksb[g][f];
            }
        }
    } for (int h = 0; h < besar; h++){
        for (int i = 0; i < besar; i++){
            printf("%d ", hasil[h][i]);
        } printf("\n");
    } return 0;
}