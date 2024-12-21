#include <stdio.h>
int main(){ 
    float  p = 5, j = 14, pi = 3.1415926535897932384, ja = (j / p)/(2 * pi);
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", p);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", j);
    printf("\nJawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", ja);
    return 0;
}