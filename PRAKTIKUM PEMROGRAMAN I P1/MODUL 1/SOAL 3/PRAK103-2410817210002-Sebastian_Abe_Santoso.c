#include <stdio.h>
int main(){
    int  a = 9, b = 6, x = 10, y = 7;
    float t = (a + b) * x / (float) y;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %0.2f", t);
    return 0;
}