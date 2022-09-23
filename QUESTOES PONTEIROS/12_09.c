#include <stdio.h>
#include <stdlib.h>
 
int Imprime(int vetor[]);

int main(){
    int vetor[10],i;
    printf("Informe 10 Números: \n");
    for(i=0;i<10;i++)
        scanf("%d",&vetor[i]);
    
    Imprime(vetor);
}

int Imprime(int vetor[]){
    int i;
    printf("\n\nLista Do Vetor:\n");
    for(i=0;i<10;i++)
        printf("%d\n",vetor[i]);
}