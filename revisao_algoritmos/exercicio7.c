#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero<0){
        printf("Numero invalido, pois eh negativo");
    }

    printf("%d! = ", numero);

    for (int i = numero; i > 0; i--) {
        printf("%d", i);

        if (i > 1) {
            printf(" X ");
        }

        resultado *= i;
    }
    printf(" = %d", resultado);

    return 0;
}
