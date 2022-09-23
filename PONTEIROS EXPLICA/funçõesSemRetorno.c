#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void mostra(){
    printf("Mensagem");
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    mostra();

    return 0;
}