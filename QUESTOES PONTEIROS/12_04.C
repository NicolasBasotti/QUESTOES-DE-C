#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int testeA(char Letra);

int main(){
    system("CLS");
    char letra; 
    int cont, verificacao[5];

    printf("\n Informe 5 Caracteres: \n (Obs:Um por vez)\n");
    for(cont=0;cont<5;cont++){
        letra=getchar();
        fflush(stdin);
        letra=toupper(letra);
        verificacao[cont]=testeA(letra);
    }

    printf("Retorno Apos teste: \n");
    for(cont=0; cont<5;cont++){
        printf("%d\n",verificacao[cont]);}

    return 0;
}

int testeA(char Letra){
    if (Letra == 'A')
        return 1;
    else
        return 0;
}