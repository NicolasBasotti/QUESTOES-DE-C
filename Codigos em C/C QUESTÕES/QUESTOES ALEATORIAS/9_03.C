#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int lin,col,soma=0;
    int matriz[5][5];



    srand(time(NULL));
    for (lin=0;lin<5;lin++){
        printf("\n");
        for(col=0;col<5;col++){
            matriz[lin][col]= rand() % 20;
            printf("%5d ", matriz[lin][col]);

            // SOMA DOS VALORES 
            soma=soma + matriz[lin][col];
        }
    }

    int somacol=0;
    int somalin=0;
    int cont;
    for (cont=0;cont<5;cont++)
        somalin=somalin+matriz[2][cont];

    for (cont=0;cont<5;cont++)
        somacol=somacol+matriz[cont][0];
    
    printf("\nSOMA DA MATRIZ = %d",soma);
    printf("\nSOMA PRIMEIRA COLUNA = %d",somacol);
    printf("\nSOMA TERCEIRA LINHA = %d",somalin);

    
}
