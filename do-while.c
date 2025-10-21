#include <stdio.h>

int main () {

    int numero;

    do {
         printf("Digite um numero para sair do programa...\n");
         scanf("%d", &numero);

         if ( numero % 2 == 0 ){
            printf("%d seu numro é par\n",  numero);
         } else {
            printf("%d seu numro é impar\n",  numero);
         }

    } while (numero % 2 != 0);

    printf("Voce digitou um numero par, saindo do programa..");

    return 0;
}