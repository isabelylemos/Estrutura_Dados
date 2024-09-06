#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{
    int vet [TAM];
    int i, media, totalNota=0;

    for(i=0; i<TAM;i++){
        printf("Informe a nota do aluno: ");
        scanf ("%d", &vet[i]);
    }

    for(i=0; i<TAM;i++){
        totalNota = vet[i]+ totalNota;

    }

    media = totalNota/TAM;

    printf("Sua media eh igual a: %d", media);

    return 0;
}
