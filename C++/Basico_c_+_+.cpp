// arquivo.cpp // C++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct aluno_t {
//    char *nome; // ponteiro
//    int idade;
//};

//int main () {
//    aluno_t aluno;
//    aluno.nome = malloc(50); //atribuindo valor ao ponteiro nome
//    strcpy(aluno.nome, "Navarro") // continuação do codigo acima
//
//    return 0;
//};


/// Codigo abaixo correto....
struct aluno_t {
    char nome[50]; //String é vetor, necessita de ""
    int idade; //int é um escalar
};

int main () {
    aluno_t aluno;
    aluno_t alunos;

    strcpy(aluno.nome, "Navarro");
    aluno.idade = 17;

    return 0;
};