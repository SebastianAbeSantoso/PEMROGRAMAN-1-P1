#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a<0){ printf("negatif"); }
    else if (a == 0){ printf("nol"); }
    else if (a > 0) { printf("positif"); }
    return 0;
}