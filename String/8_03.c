#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("CLS");

    char palavra[100]; int quantidade,cont;

    printf("Informe uma frase: ");
    fgets(palavra,100,stdin);
    if(palavra[strlen(palavra)-1]=='\n') palavra[strlen(palavra)-1]='\0';
    
    palavra[0]=toupper(palavra[0]);

    for(cont=1;cont<=strlen(palavra);cont++)
        palavra[cont]=tolower(palavra[cont]);

    printf("Sua frase foi: %s",palavra);
    
    return 0;
}