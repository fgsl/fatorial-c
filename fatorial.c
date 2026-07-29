#include <stdio.h>
#include <stdlib.h>
#include "function_fatorial.c"

int main(int argc, char *argv[]) 
{
    int numero;
    int resultado;


    if (argc == 2){
        numero = atoi(argv[1]);
    } else {
        printf("\nDigite um número: ");
        scanf("%d", &numero);
    }


    resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);
    printf("Feito por lara fazani");
    return 0;
}
