#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int numero(){
    return 9;
}

int main() { 
    setlocale(LC_ALL,"Portuguese");
    system("CLS");
    printf("%d",numero());
    return 0;
}