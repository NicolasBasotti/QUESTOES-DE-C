#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


int contaPares(int a){
    int pares =0;
    
    for(int cont=0;cont<=a;cont++){
        if (cont % 2 == 0)
            pares=pares+1;
    }
    return pares;
}

int main(){
    int num,Pares;
    printf("\ndigite um número... ");
    scanf("%d",&num);
    
    Pares = contaPares(num);

    printf("\nFoi obtido %d números pares no intervalo de 0 a %d\n",Pares,num);

}