#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int EDivisivel(int a,int b){
    if (a % b == 0)
        return 1;
    else
        return 0;
}
int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

        int x,y,divisao;

        printf("\nInforme dois números: ");
        scanf("%d%d",&x,&y);

        divisao = EDivisivel(x,y);
        
        printf("\n%d esse foi seu valor retornado\n",divisao);
}