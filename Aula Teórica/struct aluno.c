#include<stdio.h>

// Estrutura de aluno
typedef struct aluno
{
   char nome[50];
   int idade;
   int matricula;
   char curso[30]; 
}aluno;

// Usauário Preenchendo os dados da struct a1
int main()
{
    aluno a1;
    printf("Digite seu nome: ");
    scanf(" %[^\n]",a1.nome);
    printf("Digite sua idade: ");
    scanf("%d",a1.idade);
    printf("Digite sua matricula: ");
    scanf("%d",a1.matricula);
    printf("Digite seu curso: ");
    scanf(" %[^\n]",a1.curso);
    printf("\nDados do aluno\n");

    // Amostragem das variaveis
    printf("\nNome: %s\nIdade: %d\nMatricula: %d\nCurso: %s", a1.nome, a1.idade, a1.matricula, a1.curso);
    return 0;
}
