#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num[20],pares[20],impares[20];  int p=0,i=0,cont;

    printf("Informe 20 números:\n");

    for(cont=0;cont<20;cont++){
    scanf("%d",&num[cont]);
        if (num[cont] % 2==0){
            pares[p]=num[cont];
            p++;
        }
        else
        {
            impares[i]=num[cont];
            i++;
        }
    }
    
    printf("\nLista do vetor:\n");
    for (cont=0;cont<20;cont++)
        printf("%d\n",num[cont]);

    printf("\nLista dos pares:\n");
    for (cont=0;cont<p;cont++)
        printf("%d\n",pares[cont]);
    
    printf("\nLista dos Impares:\n");
    for (cont=0;cont<i;cont++)
        printf("%d\n",impares[cont]);
}