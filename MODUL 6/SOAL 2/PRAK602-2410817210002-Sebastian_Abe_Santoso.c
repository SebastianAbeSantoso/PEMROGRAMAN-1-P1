#include <stdio.h>
void zetsu(int b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i] = b[i] * (i + 1); // 
    }
}
int main() {
    int ruang;
    scanf("%d", &ruang);
    int b[ruang];
    for (int i = 0; i < ruang; i++) {
        scanf("%d", &b[i]);
    }
    zetsu(b, ruang);
    for (int i = 0; i < ruang; i++) {
        printf("%d ", b[i]);
    } printf("\n");
    return 0;
}