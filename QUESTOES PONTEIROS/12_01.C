#include <stdio.h>
#include <stdlib.h>
int num;

int func(int a, int b){
	a = (a+b)/2;  // Qual e o valor de a após a atribuição? 
      num -= a;  // qual é o valor de num ?
    printf("\n%d",num);
	return a; // que valor retorna para o programa ?  
}

main() {
	int first = 0, sec = 50;
	num = 100;
	num += func(first, sec);  // Qual e o valor de num, first e sec
             	             // antes e depois da atribuicao?      
	printf("\n\nConfira! num = %d\tfirst = %d\tsec = %d\n",num, first, sec);
	
	system("PAUSE");
	return(0);
}
