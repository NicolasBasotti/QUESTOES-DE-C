#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void parametro(int a,int b){
    a=a+30;
    b=b+45;
    int soma=a+b;
    printf("\nA soma de %d + %d = %d\n",a,b,soma);
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    
    int x=10,y=30;
    parametro(x,y);
    printf("\nValores originais\n a = %d e b = %d",x,y);

    return 0;
}