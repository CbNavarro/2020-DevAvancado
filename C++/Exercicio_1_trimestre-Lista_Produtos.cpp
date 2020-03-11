#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <list>

using namespace std;

//Estrutura do Produto
struct produto_t
{
    char nome[50];
    int codigo;
    float preco;
    int qtdEstoque;
};

//cria a lista a lista de produtos com a estrutura
static list<produto_t> listaProdutos;

// Funções globais //
// static so a classe acessa, caso contrario qualquer uma do sistema pode acessar

// Função de insere os produtos na Lista
void inserirProdutos() 
{
    // Com static a variavel fica guardada na memoria e nao perde valor, exemplo seria usar em um contador...
    // static produto_t prod;
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

// Função que lista os produtos Cadastrados
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

// Função de menu do Sistema // olar sobre p "fgets" subtitui o "strcmp"
void menu()
{
    char pg[10];
    int i = 0;
    while(1) {
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

// Função Main
int main () 
{
    menu();
    listarProdutos();

    return 0;
};
