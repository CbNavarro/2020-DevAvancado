#include <stdio.h>

int main ()
{
    int idade, *p;

    scanf("%i", &idade);
    printf("%p\n", &idade);
    
    // pega o endereço da idade, guarda no ponteiro
    p = &idade;

    // *p = pega o endereço e transforma no valor
    if (*p > 18) { 
    // faz a comparação
        printf("Maior de idade: %i Anos \n", *p);
    } else {
        printf("Menor de idade");
    }
    return 0;
}