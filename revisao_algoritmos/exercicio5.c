#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, par=0, impar=0, soma, contari=0, contarp=0, geral=0;
    float mediap, mediag;

    do{

        printf("Insira um numero ou 0 para encerrar: ");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            par = par +numero;
            contarp = contarp + 1;
        }

        if (numero % 2 != 0){
            contari = contari + 1;
            geral = geral + numero;
        }

        numero++;
    }while((numero-1) != 0);
    soma = (contarp-1) + contari;
    mediag = (float) (geral + par)/(float)soma;
    mediap = (float) par/(float)(contarp-1);

    printf("Esta eh a quantidade de numeros pares %d", contarp-1);
    printf("\nEsta eh a quantidade de numeros impares %d", contari);
    printf("\nEsta eh a media de valores pares %.2f", mediap);
    printf("\nEsta eh a media dos valores gerais %.2f", mediag);

    return 0;
}
