#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura=0, maior_alt=0, menor_alt=3;
    int i=0;

    while(i<=8){
        printf("Insira sua altura:");
        scanf ("%f", &altura);

        if (altura > maior_alt){
            maior_alt = altura;

        }
        if (altura < menor_alt){
            menor_alt = altura;

        }
    i++;
    }
    printf("Essa eh a maior altura %f", maior_alt);
    printf("\nEssa eh a menor altura %f", menor_alt);

    return 0;
}

