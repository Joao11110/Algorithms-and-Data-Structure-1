#include<stdio.h>
#include<stdlib.h>

// Recebe idade de n alunos
typedef struct alunos
{
    char nome[50];
    int matricula;
    int IRA;
}Alunos;

void imprime(Alunos * alunos, int qnt_alunos)
{
    int j;
    printf("Nome do aluno %d: %s \n", j+1, alunos[j].nome);
    printf("Matricula do aluno %d: %d \n", j+1, alunos[j].matricula);
    printf("IRA do aluno %d: %f \n", j+1, alunos[j].IRA);
}


int main()
{
    int index;
    int qnt_alunos;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);

    Alunos * Vetor_de_alunos = (Alunos*) malloc(qnt_alunos*sizeof(Alunos));

    if (Vetor_de_alunos == NULL)
    {
        exit(1);
    }
    
    for (index = 0; index < qnt_alunos; index++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf(" %[^\n]s", Vetor_de_alunos[index].nome);
        printf("Digite a matricula: ");
        scanf("%d", &Vetor_de_alunos[index].matricula);
        printf("Digite o IRA: ");
        scanf("%f", &Vetor_de_alunos[index].IRA);
    }

    imprime(Vetor_de_alunos, qnt_alunos);

    return 0;
}
