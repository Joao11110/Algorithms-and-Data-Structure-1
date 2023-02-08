#include <stdio.h>
#include<stdlib.h>

// Declaração de estruturas: Disciplina e Aluno 
typedef struct disciplina
{
    int carga_horaria;
    char nome[50];
}Disciplina;

typedef struct Aluno
{
    char nome[50];
    int matricula;
    Disciplina * disciplina;
}Aluno;

int main()
{
    // Alocação dinâmica das estruturas e verificação se elas foram alocadas
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if(aluno == NULL)
    {
        exit(1);
    }
    aluno->disciplina = (Disciplina*) malloc(sizeof(Disciplina));
    if(aluno->disciplina == NULL)
    {
        exit(1);
    }

    // Usuário preenchendo seus dados
    printf("Informe seu nome: ");
    scanf(" %[^\n]", aluno->nome);
    printf("Nome da disciplina: ");
    scanf(" %[^\n]", aluno->disciplina);
    printf("Numero da matricula: ");
    scanf(" %d", &aluno->matricula);

    // Amostragem de dados do usuário
    printf("\nNome do aluno: %s\n", aluno->nome);
    printf("Nome da disciplina: %s\n", aluno->disciplina);
    printf("Numero da matricula: %d\n", aluno->matricula);
    return 0;
}
