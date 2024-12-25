#include <stdio.h>
int main() {
    int init1, init2;
    scanf("%d %d", &init1, &init2);
    int no1 = init1, no2 = init2;
    int step = (init1 > init2) ? -1 : 1; 
    while (no1 != init2 && no2 != init1) {
        printf("%d %d - ", no1, no2);
        no1 += step; 
        no2 -= step; 
    } printf("%d %d\n", no1, no2);
    return 0;
}