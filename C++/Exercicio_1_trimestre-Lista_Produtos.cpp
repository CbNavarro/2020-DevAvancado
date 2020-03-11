#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <list>

using namespace std;

struct produto_t
{
    char nome[50];
    int codigo;
    float preco;
    int qtdEstoque;
};

//cria a lista a lista de produtos com a estrutura
static list<produto_t> listaProdutos;

void inserirProdutos() 
{
    produto_t prod;
    // Pede as informações --------------------
    printf("Digite o nome do Produto \n");
    scanf("%s", prod.nome);

    printf("Digite o código do Produto \n");
    scanf("%i", &prod.codigo);

    printf("Digite o preço do Produto \n");
    scanf("%f", &prod.preco);

    printf("Digite a quantidade do Estoque \n");
    scanf("%i", &prod.qtdEstoque);
    // -----------------------------------------
    //Adiciona um novo produto no final da lista
    listaProdutos.push_back(prod);
};

void listarProdutos()
{
    printf("==========================================================\n");
    printf("======================Lista de Produtos===================\n");
    printf("==========================================================\n");
    //For que pescorre a lista de produtos
    for (list<produto_t>::iterator listar = listaProdutos.begin(); listar != listaProdutos.end(); listar++){
        cout << "Produto: " << (listar)->nome << "\nCódigo: " << (listar)->codigo << "\nPreço: "
             << (listar)->preco << "\nQuantidade em estoque: " << (listar)->qtdEstoque << endl;
        printf("==========================================================\n");
    };

};

void menu()
{
    char pg[3];
    while(true) {

        printf("Deseja inserir um produto?: ");
        scanf("%s", pg);

        if (!strcmp(pg, "Sim"))
        {
            inserirProdutos();
        }
        else if (!strcmp(pg, "Nao"))
        {
            break;
        }else {
            printf("Comando não encontrado...\n");
        };
    };
};

int main () 
{
    menu();
    listarProdutos();

    return 0;
};
