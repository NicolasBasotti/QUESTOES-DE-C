#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void vetorFormatado(int vetor[]);
float MediaDoVetor(int vetor[]);
void MaiorQue20(int vetor[]);
void Maior(int vetor[],int *maior);

int main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[10],cont,opcao=0;
    srand(time(NULL));
    for(cont=0;cont<10;cont++)
        vetor[cont]=rand() %30;


    while(opcao != 5){
        printf("\n");
        system("PAUSE"); 
        system("CLS");
        printf("\nMENU:\n");
        printf("\n1. Mostra o vetor formatado ");
        printf("\n2. Mostra a média dos valores do vetor ");
        printf("\n3. Mostra os valores maiores que 20 ");
        printf("\n4. Mostra o maior ");
        printf("\n5. Sair...");
        printf("\n\nInforme uma do MENU:  "); scanf("%d",&opcao);

        switch (opcao){
        {
        case 1:system("CLS"); vetorFormatado(vetor);  break;

        case 2:{system("CLS"); 
            float media=MediaDoVetor(vetor);
            printf("\n\nA Média do vetor é: %.2f",media); 
            break; 
        }

        case 3:system("CLS"); MaiorQue20(vetor); break;

        case 4:system("CLS"); int maior; Maior(vetor,&maior); 
            printf("O maior número do vetor é %d",maior);
            break;

        case 5:system("CLS"); printf("\n\nPrograma Encerrado!! "); break;

        default:system("CLS"); printf("\n\nEste número não foi encontrado nas opções :("); break;
        }
        }
    }
}
    // FUNÇÕES

    void vetorFormatado(int vetor[]){
        int cont; 
        printf("\nVetor:\n");
        for(cont=0;cont<10;cont++)
            printf("%5d",vetor[cont]);
    }

    float MediaDoVetor(int vetor[]){
        float media; int cont,soma=0;
        for(cont=0;cont<10;cont++)
            soma=soma+vetor[cont];

        return media=soma/10.0;
    }

    void MaiorQue20(int vetor[]){
        int cont;
        printf("\n\nNúmeros Maiores que 20 no vetor: ");
        for(cont=0;cont<10;cont++)
            if (vetor[cont] >20) printf("%5d",vetor[cont]); 
    }

    void Maior(int vetor[],int *maior){
        int cont;
        *maior = vetor[0];
        for(cont=1;cont<10;cont++)
            if (vetor[cont]>*maior)
                *maior=vetor[cont];
    }

