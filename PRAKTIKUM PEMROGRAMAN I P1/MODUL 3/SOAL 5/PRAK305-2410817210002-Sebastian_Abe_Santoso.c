#include <stdio.h>
int main(){
    int s; scanf("%d", &s);
    int m = (s % 3600) / 60, h = (s % 86400) / 3600, d = s / 86400, detik = s % 60; 
    if (d <= 0){
    printf("%0.2d:%0.2d:%0.2d", h, m, detik);
    } else {printf("%d hari %0.2d:%0.2d:%0.2d", d,  h, m, detik);}
    return 0;
}