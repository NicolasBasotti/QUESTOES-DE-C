#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    
    int m=0,n=1;
    
    while (m<n)
    {
        printf("\n\nInforme dois n�meros: ");
        scanf("%d%d",&m,&n);
        printf("\nA soma de %d e %d � igual a %d",m,n,m+n);

    }
    return 0;
}