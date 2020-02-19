#include <stdio.h>

// Constante em C
#define N 10

int main() 
{
    int v[N], *p, t, qtdAlunos;
    
    // Seta a quantidade de alunos para definir o vetor
    printf("Escolha a quantidade de alunos: ");
    scanf("%i", &qtdAlunos);

    //Verifica se a quantidade de alunos excede a qtd da constande 
    if (qtdAlunos > N) {
        printf("ERRO, quantidade de alunos excede a memoria disponivel...");
    } else {

        // Caso contrario, entra no for e define o vetor com tamanho igual aos alunos
        for (t = 0; t < qtdAlunos; t++ ) {
            p = &v[t];
            printf("Digite as idade do aluno: ");
            scanf("%i", p);
        }

        for (t = 0; t < qtdAlunos; t++)
        {
            p = &v[t];
            printf("Idade do aluno %i: %i\n", t+1, *p);
        }
    }
    return 0;
}