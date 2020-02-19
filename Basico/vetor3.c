#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p, i, nalunos, *idades;

    printf("qtd de alunos: ");
    scanf("%i", &nalunos);

    // define o tamanho da alocação com ponteiro idades
    idades = malloc(sizeof(int));

    if (idades == NULL) {
        printf("Deu ruim\n");
        exit(1);
    }

    p = idades;

    for (i=0; i< nalunos; i++){
        printf("idade %i: ", i+1);
        scanf("%i", p);
        p++;
    }

    return 0;
}