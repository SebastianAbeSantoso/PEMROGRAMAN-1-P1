#include <stdio.h>
int main(){
    int baris, kolom, a, b, c, d;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];
    for (a = 0; a < baris; a++){
        for (b = 0; b < kolom; b++){
            scanf("%d", &matriks[a][b]);
        }
    } for (c = 0; c < baris; c++){
        for (d = 0; d < kolom; d++){
            printf("%d ", matriks[c][d]);
        } printf("\n");
    }
    return 0;
}