#include<stdio.h>
#include<stdlib.h>

typedef union documentos
{
    int rg;
    int cpf;
    int sus;
}Documentos;

typedef struct aluno
{
    char nome[50];
    int matricula;
    Documentos doc;
}Aluno;

int main()
{
    int opcao;
    Aluno aluno;
    printf("Digite o seu nome: ");
    scanf(" %[^\n]s", aluno.nome);
    printf("Digite o sua matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Informe o documento 1-CPF, 2-RG, 3-SUS: ");
    scanf("%d", &opcao);
    if(opcao == 1)
    {
        printf("Informe o CPF: ");
        scanf("%d", &aluno.doc.cpf);
        printf("\nNome: %s\nMatricula: %d\nCPF: %d\n", aluno.nome, aluno.matricula, aluno.doc.cpf);
    }
    else if(opcao == 2)
    {
        printf("Informe o RG: ");
        scanf("%d", &aluno.doc.rg);  
        printf("\nNome: %s\nMatricula: %d\nRG: %d\n", aluno.nome, aluno.matricula, aluno.doc.rg);  
    }
    else if(opcao == 3)
    {
        printf("Informe o cartao do SUS: ");
        scanf("%d", &aluno.doc.sus);
        printf("\nNome: %s\nMatricula: %d\nSUS: %d", aluno.nome, aluno.matricula, aluno.doc.sus);
    }
    else
    {
        printf("\nOpcao invalida\n");
    }
    return 0;
}
