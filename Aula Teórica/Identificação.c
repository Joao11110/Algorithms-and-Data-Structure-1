#include<stdio.h>

// Criação da struct identificação
typedef struct Identificacao
{
    char nome[50];
    int idade;
    int rg;
}Id;

// Usuário preenchendo seus dados 
int main()
{
    Id pessoa1;
    printf("Digite seu nome: ");
    gets(pessoa1.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite seu RG: ");
    scanf("%d", &pessoa1.rg);
    
    // Amostragem dos dados inseridos
    printf("\nDados de identificacao:\n\nNome: %s\nIdade: %d\nRG: %d", pessoa1.nome, pessoa1.idade, pessoa1.rg);
    return 0;
}
