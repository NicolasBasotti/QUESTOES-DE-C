#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    char palavra[20]; int quantidade,cont,total=0,totala=0,totalA=0;

    printf("Informe uma palavra: ");
    fgets(palavra,20,stdin);
    if(palavra[strlen(palavra)-1]=='\n') palavra[strlen(palavra)-1]='\0';

    for(cont=0;cont<=strlen(palavra);cont++){
        if (palavra[cont] == 'A'){
            totalA=totalA+1;
            total=total+1;
        }
        else if(palavra[cont] == 'a'){
            totala=totala+1;
            total=total+1;
        }
    }
    printf("O total de letras A/a foi de %d, tive %d 'a' e %d 'A'.",total,totala,totalA);
    return 0;
}