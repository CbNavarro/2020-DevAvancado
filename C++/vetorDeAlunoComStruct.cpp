#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define cond 10

struct adicao_produtos
{
    char nome[50]; 
    int codigo;
    float preco;
    int qtdEstoque;     
};

int main () {
    int vetor[cond], t;
    char pg[3];

    adicao_produtos produto[20];

    for (t = 0; t < cond; t++) {

        printf("Deseja inserir um produto?: ");
        scanf("%s",pg);

        if (!strcmp(pg, "Sim")) {

            printf("Digite o nome do Produto \n");
            scanf("%s", produto[0].nome);

            printf("Digite o código do Produto \n");
            scanf("%i", &produto[0].codigo);

            printf("Digite o preço do Produto \n");
            scanf("%f", &produto[0].preco);

            printf("Digite a quantidade do Estoque \n");
            scanf("%i", &produto[0].qtdEstoque);

        }
        else if (!strcmp(pg, "Nao")) {
            //Listar produtos e fechar


            printf("Fechando... \n");
            t = 10;
        }
    }
};