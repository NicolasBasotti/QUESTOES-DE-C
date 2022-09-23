#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int Mostra(int vetor[]);
 int Buble(int vetor[]);

 int main(){
    system("CLS");
    int i,vetor[5];
    srand(time(NULL));

    for(i=0;i<5;i++)
        vetor[i]= rand() %100;

    printf("Vetor Desorganizado:\n");Mostra(vetor);

    Buble(vetor);
    printf("\nVetor Organizado:\n"); Mostra(vetor);
    
 }

 int Mostra(int vetor[]){
    int i;
    for(i=0;i<5;i++)
        printf("%d\n",vetor[i]);
 }

 int Buble(int vetor[]){
    int i,x,aux;
    for(i=0;i<5;i++)
        for(x=0;x<4;x++)
            if(vetor[x]>vetor[x+1]){
                aux=vetor[x];
                vetor[x]=vetor[x+1];
                vetor[x+1]=aux;
            }
 }