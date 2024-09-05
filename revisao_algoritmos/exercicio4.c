#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma1=0, soma2=0, soma3=0, soma4=0;

    while (numero >= 0){
        printf ("Insira o numero: ");
        scanf ("%d", &numero);

        if (numero >= 0 && numero <= 25){
            soma1 = soma1 + 1;
        }

        if (numero >= 26 && numero <= 50){
            soma2 = soma2 + 1;
        }

        if (numero >= 51 && numero <= 75){
            soma3 = soma3 + 1;
        }

        if (numero >= 76 && numero <= 100){
            soma4 = soma4 + 1;
        }
        numero++;
    }

    printf ("a quantidade de numeros no intervalo [0-25] eh: %d", soma1);
    printf ("\na quantidade de numeros no intervalo [26-50] eh: %d", soma2);
    printf ("\na quantidade de numeros no intervalo [51-75] eh: %d", soma3);
    printf ("\na quantidade de numeros no intervalo [76-100] eh: %d", soma4);


    return 0;
}
