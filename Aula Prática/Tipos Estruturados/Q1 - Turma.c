#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TURMAS 10
#define MAX_VAGAS 30

typedef struct aluno
{
    int mat;
    char nome[81];
    float notas[3];
    float media;
}Aluno;

typedef struct turma
{
    char id;
    int vagas;
    Aluno* alunos[MAX_VAGAS];
}Turma;

// Declaração de funções 
Turma* cria_turma(char id);
void matricula_aluno(Turma* turma, int mat, char* nome);
void lanca_notas(Turma* turma);
void imprime_alunos(Turma* turma);
void imprime_turmas(Turma** turmas, int n);
Turma* procura_turma(Turma** turmas, int n, char id);

int main()
{
    // Aloca memória para o vetor de ponteiros para as turmas
    Turma** turma = (Turma**) malloc(MAX_TURMAS * sizeof(Turma*));

    int n, i, mat = 0;
    char opcao, id;
    char *nome[81];

    if (turma == NULL)
    {
        printf("Erro de alocação!");
    }
    
    // Do while com um switch para cada opção escolhida pelo usuário
    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1 - Criar turma\n");
        printf("2 - Listar turmas\n");
        printf("3 - Matricular aluno\n");
        printf("4 - Lancar notas\n");
        printf("5 - Listar alunos\n");
        printf("6 - Sair\n\n");
        scanf(" %[^\n]s", &opcao);

        switch (opcao)
        {
            case '1':
                // Implementação da função cria_turma
                printf("\nDigite o nome da turma: ");
                scanf(" %[^\n]s", &id);
                cria_turma(id);
                break;

            case '2':
                // Implementação da função procura_turma
                procura_turma(turma, n, id);
                // Implementação da função imprime_turmas
                imprime_turmas(turma, n);
                break;

            case '3':
                // Implementação da função matricula_aluno
                printf("\nDigite a matricula do aluno: ");
                scanf("%d", &mat);
                printf("\nDigite o nome do aluno: ");
                scanf(" %[^\n]s", &nome);
                matricula_aluno(turma, mat, nome);
                break;

            case '4':
                // Implementação da função lanca_notas
                lanca_notas(turma);
                break;

            case '5':
                // Implementação da função imprime_alunos
                imprime_alunos(turma);
                break;

            case '6':
                // Libera a memória alocada e encerra o programa
                for (i = 0; i < MAX_TURMAS; i++)
                {
                free(turma[i]->alunos[i]);
                }
                free(turma);
                break;

            default:
                printf("Opção inválida\n");
                break;
        }
    }
    return 0;
}

// Função cria_turma e cria uma turma e atribui NULL no seu vetor
Turma* cria_turma(char id) 
{
    int i;
    Turma* turma = (Turma*) malloc(MAX_TURMAS * sizeof(Turma));
    turma->id = id;
    turma->vagas = MAX_TURMAS;

    for (i = 0; i < MAX_TURMAS; i++)
    {
        turma->alunos[i] = NULL;
    }
    return turma;
}

// Função matricula_aluno matricula o aluno em uma turma já criada
void matricula_aluno(Turma* turma, int mat, char* nome) 
{
    int i;
    if (turma->vagas == 0)
    {
        printf("Turma %c sem vagas.\n", turma->id);
        return;
    }
    Aluno* aluno = (Aluno*) malloc(sizeof(Aluno));
    aluno->mat = mat;
    strcpy(aluno->nome, nome);
    for (i = 0; i < 3; i++)
    {
        aluno->notas[i] = 0.0;
    }
    aluno->media = 0.0;
    i = MAX_VAGAS - turma->vagas;
    turma->alunos[i] = aluno;
    turma->vagas--; 
}

// Função lanca_notas lança as 3 notas para cada aluno da turma
void lanca_notas(Turma* turma)
{
    int i;
    Aluno ** aluno;
    for (int i = 0; i < MAX_VAGAS - turma->vagas; i++)
    {
        Aluno* aluno = turma->alunos[i];
        float soma = 0.0;
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota %d do aluno %s: ", j+1, aluno->nome);
            scanf("%f", &aluno->notas[j]);
            soma += aluno->notas[j];
        }
        aluno->media = soma / 3;
    }
}

// Função imprime_alunos imprime os dados dos alunos de uma turma
void imprime_alunos(Turma* turma) {
    for (int i = 0; i < MAX_VAGAS - turma->vagas; i++)
    {
        Aluno* aluno = turma->alunos[i];
        printf("\nMatrícula: %d\n", aluno->mat);
        printf("\nNome: %s\n", aluno->nome);
        printf("\nNotas: %.1f, %.1f, %.1f\n", aluno->notas[0], aluno->notas[1], aluno->notas[2]);
        printf("\nMédia: %.1f\n", aluno->media);
    }
}

// Função imprime_turmas imprime as turmas com seus respectivos alunos dessa turma
void imprime_turmas(Turma** turmas, int n) {
    for (int i = 0; i < n; i++)
    {
        Turma* turma = turmas[i];
        printf("Turma %c - Vagas: %d\n", turma->id, turma->vagas);
        if (turma->vagas < MAX_VAGAS)
        {
            printf("Alunos matriculados:\n");
            imprime_alunos(turma);
        }
    }
}

// Função procura_turma imprime as turmas que foram criadas de acordo com o numero n = MAX_TURMAS
Turma* procura_turma(Turma ** turma, int n, char id){
    int i;
    n = MAX_TURMAS;
    printf("Numero de turmas:\n");
    for (i = 0; i < n; i++)
    {
       if (turma[i]->id || NULL)
       {    
            printf("\nTurma %s: ", turma[i]->id);
       }  
       else
       {
            printf("\nNao exitem turmas cadastradas.");
       }   
    }
    return turma;
}
