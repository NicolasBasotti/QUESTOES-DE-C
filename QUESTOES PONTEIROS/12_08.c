#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Calculando(int *a, int *b, int *c, int *d);

int main(){
    system("CLS");
    setlocale(LC_ALL,"Portuguese");
    
    int num1 = 15, num2 = 20, num3 = 10, num4, produto;

    produto =Calculando(&num1,&num2,&num3,&num4);

    printf("\nA soma de %d + %d + %d = %d",num1,num2,num3,num4);
    printf("\nE o Produtos dos 4 Parametros é = %d",produto);
}

int Calculando(int *a, int *b, int *c, int *d){
    *d=*a + *b + *c;
    int produto=*a * *b * *c * *d;
    return produto;
}