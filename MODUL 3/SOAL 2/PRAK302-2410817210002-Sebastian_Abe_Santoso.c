#include <stdio.h>
int main(){ 
    int a; 
    scanf("%d", &a); if (a > 100 || a < 0){ printf("nilai invalid"); }
    else if(a >= 80){printf("A");}
    else if(a >= 70){printf("B");}
    else if(a >= 60){printf("C");}
    else if(a >= 50){printf("D");}
    else {printf("E");}
    return 0;
}