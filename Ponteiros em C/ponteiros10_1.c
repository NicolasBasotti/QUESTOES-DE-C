#include <stdlib.h>
#include <stdio.h>

int main () {

    int y, *p, x;

    y = 0;// y recebe 0

    p = &y;// ponteiro recebe o endereço de Y

    x = *p;// X recebe zero

    x = 4;// x recebe 4

    (*p)++;// y++ y = 1

    x--;// x-- x=3

    (*p) += x; //

    printf ("y = %d\n", y);
    system("PAUSE");

return(0); }