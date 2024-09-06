#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int vet1[TAM];
    int vet2 [TAM];
    int soma[TAM], i;

    printf("Vetor 1:\n");
    for(i=0; i<TAM; i++){
        printf("Informe os numeros: ");
        scanf("%d", &vet1[i]);
    }

    printf("Vetor 2: \n");
    for(i=0; i<TAM; i++){
        printf("Informe os numeros: ");
        scanf("%d", &vet2[i]);
    }

    for(i=0; i<TAM; i++){
        soma[i] = vet1[i]+vet2[i];
        printf("%d ", soma[i]);
    }


    return 0;
}
