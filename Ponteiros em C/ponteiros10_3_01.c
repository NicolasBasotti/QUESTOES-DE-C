#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[10][10];
    int *p,cont,lin,i=1;

    system("CLS");// PONTEIRO DE 0
    p=matriz[0];
    for(cont=0;cont<100;cont++){
       *p=0;
        p++;
    }
    p=matriz[0];
    for(cont=0;cont<100;cont++){
        printf("%5d",*p);
        p++;
    }

    printf("\n\n\n\n"); // PONTEIRO DE 1 A 100

    p=matriz[0];
    for(cont=0;cont<100;cont++){
        *p=i++;
        p++;
    }
    p=matriz[0];
    for(cont=0;cont<100;cont++){
        printf("%5d",*p);
        p++;
    }
    printf("\n\n\n\n\n%5d",i);
}