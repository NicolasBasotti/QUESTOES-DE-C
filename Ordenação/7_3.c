#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int num[20],pares[20],p=0,cont,troca,list;

    printf("Informe 20 números:\n");

    for(cont=0;cont<20;cont++){
    scanf("%d",&num[cont]);
        if (num[cont] % 2==0){
            pares[p]=num[cont];
            p++;
        }
    }

    for(cont=0;cont<p;cont++)
          for(list=0;list<p;list++)
          {
            if (pares[cont]>pares[list]){
                troca=pares[list];
                pares[list]=pares[cont];
                pares[cont]=troca;
            }
          }


    printf("\nLista dos pares:\n");
    for (cont=0;cont<p;cont++)
        printf("%d \n",pares[cont]);
    return 0;
}