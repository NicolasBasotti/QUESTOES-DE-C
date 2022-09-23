#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    char palavra[10]; int quantidade,cont;

    printf("Informe uma palavra: ");
    fgets(palavra,10,stdin);
    if(palavra[strlen(palavra)-1]=='\n') palavra[strlen(palavra)-1]='\0';

    printf("\n%s",strupr(palavra));
    printf("\n%s",strlwr(palavra));

}