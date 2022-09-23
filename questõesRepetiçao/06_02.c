#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    int num,i;
    num = 0;
    while((num<1) && (num>10))
    {
        printf("Informe um número de 1 a 10: ");
        scanf("%d",&num);
        system("CLS");
        if(num<1||num>10) continue; 

        printf("\n\bA tabuada de %d é: \n\b",num);
            for(i=1;i<=10;i++){
                printf("\n%d x %d = %d",num,i,i*num);
        }
    }
}
