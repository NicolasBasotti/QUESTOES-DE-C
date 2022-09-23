// 12.05

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void troca(int *num,int *num2);

int main(){
    system ("CLS");
    int num = 100, num2 = 200;
    printf("Valores originais: \n Num = %d e Num2 = %d",num,num2);
    troca(&num,&num2);

    printf("\nValores Finais: \n Num = %d e  Num2 = %d",num,num2);
    return 0;
}

void troca(int *num, int *num2){
    int troca=*num;
    *num=*num2;
    *num2=troca;
}

