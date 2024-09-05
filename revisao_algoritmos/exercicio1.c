#include <stdio.h>
#include <stdlib.h>


int main() {

    int soma, i;

    for (i = 0; i <= 1000; i++) {
        if ((i % 2 != 0) && (i % 5 == 0)) {
            soma = soma + i;
        }
    }

    printf("A soma eh: %d", soma);

    return 0;
}

