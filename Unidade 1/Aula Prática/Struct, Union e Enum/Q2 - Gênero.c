#include<stdio.h>

// Enem gnenero representado os gêneros
typedef enum genero
{
    MASCULINO,
    FEMININO,
}Genero;

// Struct pessoas referente aos dados das pessoas
typedef struct pessoa
{
    char nome[60];
    int idade;
    Genero genero;
}Pessoa;

// Implementação os dados das pessoas são lidos e dependendo do gênero o usuário entra no if ou no else if correspondente ao seu gênero
int main()
{
    Pessoa pessoa;
    printf("Digite o seu nome: ");
    scanf(" %[^\n]s", pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o seu genero: (masculino - 0, feminino - 1, Neutro - 2) ");
    scanf("%d", (int*)&pessoa.genero);
    if (pessoa.genero == 0)
    {
        printf("\nDados\nNome: %s\nIdade: %d\nGenero: Masculino\n", pessoa.nome, pessoa.idade);
    }
    else if (pessoa.genero == 1)
    {
        printf("\nDados\nNome: %s\nIdade: %d\nGenero: Feminino\n", pessoa.nome, pessoa.idade);
    }
    return 0;
}
