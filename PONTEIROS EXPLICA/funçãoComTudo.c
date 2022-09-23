#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int parametro(int *a,int *b,int retorna){
    *a+=45;
    *b+=34;
    retorna+=100;
    printf("\n\n TUDO OCORREU COMO O PLANEJADO ;)\n\n 8=====D~~~~\n\n");
    return retorna+202;
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    int x=10,y=30,z=10;
    printf("\nValores Antes da função \nx = %d e y = %d e z = %d",x,y,z);

    int w = parametro(&x,&y,z);
    printf("\nValores depois da função:\nx = %d e y = %d e z = %d e retorna = %d ",x,y,z,w);
    return 0;
}