#include <stdio.h>
int main() {
    int awal = 1, kelipatan;
    char character;
    scanf("%d %c", &kelipatan, &character);
    while (awal != 51) {
        if (awal % kelipatan != 0) {
            printf("%d ", awal);
        } else {
            printf("%c ", character);
        } awal++;
    } return 0;
}