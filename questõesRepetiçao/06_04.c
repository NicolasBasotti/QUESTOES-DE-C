#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num,i,soma=0,quantidade=0;
    float media;

    printf("Informe 20 n�meros: ");
    for(i=1;i<=20;i++){
        scanf("%d",&num);
        if(num>10){
            soma=soma+num;
            quantidade=quantidade+1;
        }
    }
    if(quantidade!=0){
        printf("\nA quantidade de n�meros maiores que zero foi: %d",quantidade);
        media=(float) soma/quantidade;
        printf("\nA m�dia deste n�meros foi: %.2f",media);
    }
    else printf("\nN�o tivemos N�meros Maiores que 10...");
    return 0;
}