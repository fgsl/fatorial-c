#include <stdio.h>
#include "function_fatorial.c"

int main()
{
    int n = 0;
    long resultado = 1;

    printf("digite um numero\n");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("o fatorial de %d é %d \n", n, resultado);
    printf("feito por Flávio Lisboa");

    return 0;
}
