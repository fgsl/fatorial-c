#include <stdio.h>

int main() 
{
    int numero;
    int resultado;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);
    printf("Feito por lara fazani")
    return 0;
}
