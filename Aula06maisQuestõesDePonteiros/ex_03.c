#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float fTempoMedio(int tempo[]);
float fConsumoMedio(float tempoMedio, float potencia);
void fMaiorConsumo(int tempo[], float potencia, int *dia, float *consumo);

int main(){
    setlocale(LC_ALL,"Portuguese");
    float mediaTempo,potencia,consumo;
    int cont,horasDia[7],dia;

    printf("Informe a Potência em Watss/hora de seu equipamento: ");
    scanf("%f",&potencia);

    printf("\n\nAgora Informe quantas horas ele ficou ligado em cada dia da semana: ");
    for(cont=0;cont<7;cont++)
        scanf("%d",&horasDia[cont]);
    
    mediaTempo=fTempoMedio(horasDia);
    printf("\n");
    system("PAUSE");

    fConsumoMedio(mediaTempo, potencia);
    printf("\n");
    system("PAUSE");

    fMaiorConsumo(horasDia, potencia, &dia, &consumo);
    printf("%d",dia);
    switch (dia)
    {
    case 0: printf("\nO maior consumo foi no domingo %.2f Watss",consumo); break;
    case 1: printf("\nO maior consumo foi na segunda-feira %.2f Watss",consumo); break;
    case 2: printf("\nO maior consumo foi no terça-feira %.2f Watss",consumo); break;
    case 3: printf("\nO maior consumo foi no quarta-feira %.2f Watss",consumo); break;
    case 4: printf("\nO maior consumo foi no quarta-feira %.2f Watss",consumo); break;
    case 5: printf("\nO maior consumo foi no quinta-feira %.2f Watss",consumo); break;
    case 6: printf("\nO maior consumo foi no sexta-feira %.2f Watss",consumo); break;
    default: break;
    }

}

float fTempoMedio(int tempo[]){
    int cont,soma=0; float media;
    system("CLS");
    printf("\n\nRelatório Tempo Médio Diário!! ");
    for(cont=0;cont<7;cont++)
        soma=soma+tempo[cont];
        media = soma/7.0;

    printf("\nO tempo médio de consumo diário feito de %.2f Watss horas por dia ",media);
    return media;
}

float fConsumoMedio(float tempoMedio, float potencia){
    system("CLS");
    printf("\n\nO consumo Médio Desse Equipamento!!");
    float consumoMedio=(float)potencia*tempoMedio;
    printf("\nO consumo médio foi de %.2f Watss",consumoMedio);
}

void fMaiorConsumo(int tempo[], float potencia, int *dia, float *consumo){
    system("CLS");
    int cont, maior=tempo[0];
    for(cont=1;cont<7;cont++)
        if (tempo[cont]>maior){ 
            maior=tempo[cont];
            (*dia)=cont;
        }
    *consumo=maior*potencia;
}
