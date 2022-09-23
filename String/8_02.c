#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    char palavra[11]; int quantidade,cont;

    printf("Informe uma palavra: ");
    fgets(palavra,11,stdin);
    if(palavra[strlen(palavra)-1]=='\n') palavra[strlen(palavra)-1]='\0';
    
    quantidade=strlen(palavra);

    printf("Sua palavra tem %d caracteres!",quantidade);

    for(cont=0;cont<=quantidade;cont++)
        printf("\n%s",palavra);
    return 0;
}