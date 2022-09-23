#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void parametro(int a,int b){
    printf("\n%d",a);
    printf("\n%d",b);
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    
    int x=10,y=30;
    parametro(x,y);

    return 0;
}