#include <stdio.h>
int main(){
    int baris, baris2, a, b, c, d, total;
    scanf("%d %d", &baris, &baris2);
    if (baris != baris2){
        printf("Jumlah tidak sama");
    }   else {
    int matriks[baris][baris2];
    for (a = 0; a < 2; a++){
        for (b = 0; b < baris2; b++){
            scanf("%d", &matriks[a][b]);
        }
    }   for (c = 0; c < baris; c++){
        int total = matriks[0][c] * matriks[1][c];
        printf("%d ", total);       
        }
    } return 0;
}