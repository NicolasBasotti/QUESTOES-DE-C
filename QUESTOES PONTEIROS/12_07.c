#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Maior_Menor(int *A, int *B);
int Mostra(int *n1,int *n2);

int main(){    
    system("CLS");
    setlocale(LC_ALL,"Portuguese");

    int n1,n2;
    printf("Informe dois Números: \n");
    scanf("%d%d",&n1,&n2);

    Maior_Menor(&n1,&n2);
    Mostra(&n1,&n2);
}

int Maior_Menor(int *A,int *B){
    if(*A>*B){
        int troca = *A;
        *A=*B;
        *B=troca;
    }
}

int Mostra(int *n1, int *n2){
    int i;
    printf("\nOs Números encontrados no intervalo de %d e %d são: \n",*n1,*n2);
    for(i=*n1;i<=*n2;i++)
        printf("%5d",i);
}