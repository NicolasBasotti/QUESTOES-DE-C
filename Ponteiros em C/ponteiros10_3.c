#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[10][10];
    int *p,cont,lin;

    system("CLS");

    p=matriz[0];
    for(cont=0;cont<100;cont++){
       *p=0;

        p++;
    }
    for(cont=0;cont<10;cont++)
        for(lin=0;lin<10;lin++)
            printf("%5d",matriz[cont][lin]);

}