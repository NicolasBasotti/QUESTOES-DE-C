#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    char palavra1[11],palavra2[11],palavra3[11],palavra4[33];

    printf("\nDigite uma palavra: ");
    fgets(palavra1,11,stdin);
    if(palavra1[strlen(palavra1)-1]=='\n') palavra1[strlen(palavra1)-1]='\0';

    printf("\nDigite uma segunda palavra: ");
    fgets(palavra2,11,stdin);
    if(palavra2[strlen(palavra2)-1]=='\n') palavra2[strlen(palavra2)-1]='\0';

    printf("\nDigite uma terceira palavra: ");
    fgets(palavra3,11,stdin);
    if(palavra3[strlen(palavra3)-1]=='\n') palavra3[strlen(palavra3)-1]='\0';

    system("CLS");
    if (!(strcmp(palavra1,palavra2)&&strcmp(palavra1,palavra2))) printf("\nAs 3 Palavras são iguais!");
    else if(!strcmp(palavra1,palavra2)) printf("\nA duas primeiras Palavras são iguais!");
    else if (!strcmp(palavra1,palavra3)) printf("\nAs a primeira e terceria palavra são iguais!");
    else
    {
        strcat(palavra4,palavra1);
        strcat(palavra4,palavra2);
        strcat(palavra4,palavra3);
        printf("\nVocê Digitou: %s",palavra4);
    }
    return 0;
}