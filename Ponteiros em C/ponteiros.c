#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    int con=110;
    int *pt;
    
    pt=&con;

    printf("\n%p",pt);// endere�o do ponteiro
    printf("\n%d",*pt);// valor armazenado no endere�o do ponteiro

    *pt=100;// incremento na v�riavel que o ponteiro guarda
    printf("\n%d",con);

    (*pt)++;
    printf("\n%d",*pt);

}