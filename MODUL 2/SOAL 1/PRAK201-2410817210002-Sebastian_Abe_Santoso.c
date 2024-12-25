#include <stdio.h>
int main(){
    char N[50], NIM[20], KP[20],  TTL[100],  A[300],  H[50], NHP[20];
    printf("Nama                  : "), fgets(N, sizeof(N), stdin);
    printf("NIM                   : "), fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel         : "), fgets(KP, sizeof(KP), stdin);
    printf("Tempat/Tanggal Lahir  : "), fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat                : "), fgets(A, sizeof(A), stdin);
    printf("Hobby                 : "), fgets(H, sizeof(H), stdin);
    printf("No. HP                : "), fgets(NHP, sizeof(NHP), stdin);
    printf("Nama                  : %s", N);
    printf("NIM                   : %s", NIM);
    printf("Kelas Paralel         : %s", KP);
    printf("Tempat/Tanggal Lahir  : %s", TTL);
    printf("Alamat                : %s", A);
    printf("Hobby                 : %s", H);
    printf("No. HP                : %s", NHP);
return 0;
}