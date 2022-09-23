#include <stdio.h>

#include <stdlib.h>

int main(){

    int x=10, *p, **q;

    p = &x;

    q = &p;

    printf("\n%d\n", **q);
    printf("\n%d\n", *p);
    system("PAUSE");

    return(0);
} 