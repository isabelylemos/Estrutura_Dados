#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, positivo=0, negativo=0;
    float media, total, contar, percentagemp, percentagemn;

    while ((i<0)||(i>0)){

        printf("Insira um numero: ");
        scanf("%d", &i);

        if (i>0){
            positivo++;
        }
        if (i<0){
            negativo++;
        }

        total+=i;

        contar = positivo+negativo;

        percentagemn= negativo/contar * 100;

        percentagemp= positivo/contar * 100;

        media = total/contar;
    }

    printf("A media aritmetica dos valores lidos eh: %d", media);
    printf("\nA quantidade de valores positivos eh: %d", positivo);
    printf("\nA quantidade de valores negativos eh: %d", negativo);
    printf("\nO percentual de valores positivos eh: %.2f", percentagemp);
    printf("\nO percentual de valores negativos eh: %.2f", percentagemn);

    return 0;
}

