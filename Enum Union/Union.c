#include<stdio.h>

typedef union tipo
{
    int ALIMENTO;
    int BEBIDA;
    int ELETRONICO;
}Tipo;

typedef struct produto
{
    char nome[60];
    float preco;
    Tipo tipo;
}Produdo;

int main()
{
    Produdo produto;
    int opcao;
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", produto.nome);
    printf("Digite o preco: ");
    scanf("%f", &produto.preco);
    printf("Digite o tipo do produto: (Alimento - 0, Bebida - 1, Eletronico - 2) ");
    scanf("%d", &produto.tipo);
    if(produto.tipo.ALIMENTO == 0)
    {
        printf("\nDados do produto:\n\nNome: %s\nPreco: R$%.2f\nTipo: Alimento\n", produto.nome, produto.preco);
    }
    else if(produto.tipo.BEBIDA == 1)
    {  
        printf("\nDados do produto:\n\nNome: %s\nPreco: R$%.2f\nTipo: Bebida\n", produto.nome, produto.preco);  
    }
    else if(produto.tipo.ELETRONICO == 2)
    {
        printf("\nDados do produto:\n\nNome: %s\nPreco: R$%.2f\nTipo: Eletronico\n", produto.nome, produto.preco);
    }
    else
    {
        printf("\nOpcao invalida\n");
    }
    return 0;
}
