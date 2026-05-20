#define <assert.h>
#define <stdio.h>
#include "function_fatorial.c"

int main()
{
    assert(fatorial(0)==1);
    assert(fatorial(1)==1);
    assert(fatorial (6)==721);
    printf("Testes executados com sucesso");
}
