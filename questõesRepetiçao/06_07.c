#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num,int1=0,int2=0,int3=0,int4=0,foraDeIntervalo=0;

    do
    {
        printf("Informe um número: ");
        scanf("%d",&num);

        if ((num>0)&&(num < 26)) 
        int1=int1 +1;
        else if ((num>25)&&(num < 52)) 
        int2=int2 +1;
        else if ((num>51)&&(num < 76)) 
        int3=int3 +1;
        else if ((num>75)&&(num < 101)) 
        int4=int4 +1;
        else foraDeIntervalo= foraDeIntervalo +1;

    } while (num != 0);
    system("CLS");
    printf("\nA quantidade de números no intervalo de 1 .. 25 é de %d",int1);
    printf("\nA quantidade de números no intervalo de 26 .. 50 é de %d",int2);
    printf("\nA quantidade de números no intervalo de 51 .. 75 é de %d",int3);
    printf("\nA quantidade de números no intervalo de 76 .. 100 é de %d",int4);
    printf("\nA quantidade de números no intervalo fora de intevalo é %d",foraDeIntervalo);
    return 0;
}