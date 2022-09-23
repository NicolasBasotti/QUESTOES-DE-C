#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void parametro(int *a,int *b){
    *a+=45;
    *b+=34;
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    int x=10,y=30;
    printf("\nValores Antes da função \nx = %d e y = %d",x,y);

    parametro(&x,&y);
    printf("\nValores depois da função:\nx = %d e y = %d",x,y);
    return 0;
}