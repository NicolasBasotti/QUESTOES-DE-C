#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int i, soma;
    soma=0;
    printf("\n\bLista Ordenada de 100 a 200\n\b");
    for(i=100; i<=200;i++){
        printf("\n%d",i);
        soma=soma+i;
    }

    printf("\n\n\bA soma de sua lista ordenada é: %d\n\b",soma);
    return 0;
}