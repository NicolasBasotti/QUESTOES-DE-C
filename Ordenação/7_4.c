#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    
    char letra[10],caracter; int cont,verific=0;

    printf("\nInforme 10 caracteres: \n");

    for(cont=0;cont<10;cont++){
        letra[cont]=getchar();
        fflush(stdin);
    }
    
    printf("\nInforme mais um caracter: \n");
    caracter=getchar();

    for(cont=0;cont<10;cont++){
        if ((letra[cont]==caracter)&& (verific==0)){
            printf("\nSeu caracter foi encontrado!!\n");
            printf("Na posição %d",cont+1);
        }
        else if ((letra[cont]==caracter))
            printf("Na posição %d",cont+1);
    }
    
}