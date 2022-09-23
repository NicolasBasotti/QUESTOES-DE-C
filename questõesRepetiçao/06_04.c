#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num,i,soma=0,quantidade=0;
    float media;

    printf("Informe 20 números: ");
    for(i=1;i<=20;i++){
        scanf("%d",&num);
        if(num>10){
            soma=soma+num;
            quantidade=quantidade+1;
        }
    }
    if(quantidade!=0){
        printf("\nA quantidade de números maiores que zero foi: %d",quantidade);
        media=(float) soma/quantidade;
        printf("\nA média deste números foi: %.2f",media);
    }
    else printf("\nNão tivemos Números Maiores que 10...");
    return 0;
}