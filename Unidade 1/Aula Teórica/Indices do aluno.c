#include<stdio.h>

typedef union indices
{
    float ig;
    float ira;
    float irt;
}Indices;

typedef struct aluno
{
    char nome[50];
    int matricula;
    char curso[40];
    Indices indice;
}Aluno;

int main()
{
    Aluno aluno;
    printf("Digite o seu nome:");
    scanf(" %[^\n]s", aluno.nome);
    printf("Digite o sua matricula:");
    scanf("%D", aluno.matricula);
    printf("Digite o seu curso:");
    scanf(" %[^\n]s", aluno.curso);
    printf("Digite o seu no:");
    scanf(" %[^\n]s", aluno.indice.ig);
    printf("Digite o seu nome:");
    scanf(" %[^\n]s", aluno.indice.ira);
    printf("Digite o seu nome:");
    scanf(" %[^\n]s", aluno.indice.irt);
    return 0;
}
