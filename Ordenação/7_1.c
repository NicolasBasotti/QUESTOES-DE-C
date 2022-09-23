#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int cont,num[10],maior,posi;

    printf("INFORME 10 NÚMEROS:\n ");

    for(cont=0;cont<10;cont++)
    scanf("%i",&num[cont]);

    maior=num[0];
    posi=0;

    for(cont=0;cont<10;cont++){
        if (maior<num[cont]){
        maior=num[cont]; 
        posi=cont;
        }
    }

    printf("\nO maior Número encontrado é %d",maior);
    printf("\nE sua Posição no Vetor de 10 caracteres é %d",posi+1);
    
    return 0;
}