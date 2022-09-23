#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num,multi;
    char letra = 'S';

    printf ("Informe um número: \n");
    scanf("%d",&num);
    fflush(stdin);

    while(letra != 'N'){
        multi= num*2;
        printf("\nSeu número %d x 2 = %d",num,multi);
        printf("\nDeseja continuar? S/N\n");
        letra=getchar();
        fflush(stdin);
        letra=toupper(letra);
        if ((letra!='S')&&(letra!='N')) continue;
        num=multi;
    }
    printf("Seu Programa foi encerrado com Sucesso!!");
    return 0;
}
