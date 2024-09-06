#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    // declarar o vetor com 10 posições
    int vet[TAM];
    int i;

    // acessar todas as posições do vetor
    for(i=0; i < TAM;i++){
        // solicitar os dados ao usuário
        printf("Informe o valor: ");
        scanf("%d", &vet[i]);
    }
    printf("\n");

    // imprimir os valores do vetor
    for(i=0; i < TAM;i++){
        printf("%d", vet[i]);
    }
     printf("\n");

    // imprimir somente os valores pares
    for(i=0; i < TAM;i++){
        if(vet[i] % 2==0){
            printf("%d", vet[i]);
        }
    }
     printf("\n");

    // imprimir somente os valores impares
    for(i=0; i < TAM;i++){
        if(vet[i] % 2 !=0){
            printf("%d", vet[i]);
        }
    }

    return 0;
}
