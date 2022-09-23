#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void fCriptografia(char origem[], char destino[], int *trocas);

int main(){
    system("CLS");

    char palavra[100],cripto[100],trocas=0;
    printf("Informe Uma Palavra: ");
    fgets(palavra,100,stdin);
    fCriptografia(palavra,cripto,&trocas);

    printf("\n\nPalavra original: %s",palavra);
    printf("\nTivemos %d",trocas);
    printf("\n\nPalavra Criptografada: %s",cripto);
    


}

void fCriptografia(char origem[], char destino[], int *trocas){
    int cont;

    strupr(origem);

    for(cont=0; cont<= strlen(origem); cont++){

        switch (origem[cont])
        {
        case 'Z': destino[cont]='P'; (*trocas)++; break;
        case 'P': destino[cont]='Z'; (*trocas)++; break;
        
        case 'E': destino[cont]='O'; (*trocas)++; break;
        case 'O': destino[cont]='E'; (*trocas)++; break;

        case 'N': destino[cont]='L'; (*trocas)++; break;
        case 'L': destino[cont]='N'; (*trocas)++; break;

        case 'I': destino[cont]='A'; (*trocas)++; break;
        case 'A': destino[cont]='I'; (*trocas)++; break;

        case 'T': destino[cont]='R'; (*trocas)++; break;
        case 'R': destino[cont]='T'; (*trocas)++; break;

        default: destino[cont]=origem[cont];
            break;
        }
    }
}