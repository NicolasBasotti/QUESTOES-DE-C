#include <stdlib.h>
#include <stdio.h>

int Mostra1(int n); 
int Mostra2(int *n);

int main() {
    int num = 10;
    Mostra2(&num);
    printf("%d\n", num);
    system("PAUSE");
    return(0);   
}

int Mostra1(int n){
     n = 100;
     return(0);   
}

int Mostra2(int *n){
    int x;
     *n = 200;
     x = *n;
     Mostra1(x);
     return(0);   
}
