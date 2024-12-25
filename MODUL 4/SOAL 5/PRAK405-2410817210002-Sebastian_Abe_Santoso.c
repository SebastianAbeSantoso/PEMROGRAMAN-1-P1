#include <stdio.h>
int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int baris_total = 0;
        printf("(");
        for (int j = i; j >= 1; j--) {
            int hasil = j * kelipatan;
            baris_total += hasil;
            printf("%d * %d", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        } printf(") = %d\n", baris_total);
        total += baris_total;
    } printf("%d\n", total);
    return 0;
}