#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int cont,num[10],maior,posi;

    printf("INFORME 10 N�MEROS:\n ");

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

    printf("\nO maior N�mero encontrado � %d",maior);
    printf("\nE sua Posi��o no Vetor de 10 caracteres � %d",posi+1);
    
    return 0;
}