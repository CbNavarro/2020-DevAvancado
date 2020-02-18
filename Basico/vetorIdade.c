#include <stdio.h>

int main()
{
    int idade[2], *p[2];
  
    p[0] = &idade[0];
    p[1] = &idade[1];

    scanf("%i %i", p[0], p[1]);

    if (*p[0] > *p[1] ){
        printf("idade 1 é maior:  ");

    } else if (*p[0] < *p[1]){
        printf("Idade 2 é maior ");
    } else {
        printf("Idades iguais ");
    };

    return 0;
}