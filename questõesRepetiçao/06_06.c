#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    
    int m=0,n=1;
    
    while (m<n)
    {
        printf("\n\nInforme dois números: ");
        scanf("%d%d",&m,&n);
        printf("\nA soma de %d e %d é igual a %d",m,n,m+n);

    }
    return 0;
}