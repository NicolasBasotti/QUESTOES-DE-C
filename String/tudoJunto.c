#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("CLS");
    char palavra[20]; int quantidade,cont;

    printf("Informe uma palavra/Frase: ");
    fgets(palavra,20,stdin);
        if(palavra[strlen(palavra)-1]=='\n') palavra[strlen(palavra)-1]='\0';
        quantidade=strlen(palavra);

    printf("\nQuantidade de caracteres = A quantidade de vezes a palavra:\n");
    printf("\nSua palavra tem %d caracteres!",quantidade);
    for(cont=0;cont<quantidade;cont++)
        printf("\n%s\n",palavra);
    system("PAUSE"); 

    printf("\n\nPrimeira letra maiuscula e o resto minuscula:\n\n");
    palavra[0]=toupper(palavra[0]);
    for(cont=1;cont<=strlen(palavra);cont++)
        palavra[cont]=tolower(palavra[cont]);
    printf("Sua frase foi: %s\n",palavra);
    system("PAUSE");

    printf("\nPalavra totalmente maiscula e minuscula");
    printf("\n%s",strupr(palavra));
    printf("\n%s",strlwr(palavra));

    printf("\n\nFim de programa...");
    return 0;
}