/* Questão 2) Escreva um programa para corrigir provas de múltipla escolha. Cada prova tem N
questões e cada questão vale 10/N pontos. Os primeiros dados a serem lidos são o número de
questões e o gabarito da prova. Em seguida, serão lidas as respectivas respostas de um total de
10 alunos matriculados. Calcule e mostre:
a) a nota obtida para cada aluno;
b) a porcentagem de aprovação, sabendo-se que a nota mínima para ser aprovado é 6. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Declarando variáveis 
    int i, j, num_quest= 0;
    int a = 1, b = 1, c = 1, alunos = 2;
    float porcentagem_aprovacao = 0;

    // Quantidade de pessoas do questionário
    printf("Quantas questoes a prova possui: ");
    scanf("%d", &num_quest);

    // Alocação de memória dinâmica das variáveis
    char *gabarito = (char*)malloc(num_quest * sizeof(char));
    char *respostas = (char*)malloc(num_quest * sizeof(char));
    int nota[10];

    // Inserindo o gabarito da prova
    for (i = 0; i < num_quest; i++)
    {
        printf("\nDigite o gabarito da %d questao:\n", a++ );
        scanf(" %c", &gabarito[i]);
    }

    // Alunos inserindo as respostas da prova
    for (i = 0; i < alunos; i++)
    {
        printf("\nAluno %d:\n", b++ );
        for (j = 0; j < num_quest; j++)
    {
        printf("\nColoque a resposta da %d questao da prova:\n", c++ );
        scanf(" %c", &respostas[j]);
        
    }
    c = 1;
    }

    // Verificação das respostas da prova com o gabarito
    for (i = 0; i < alunos; i++)
    {
        for (j = 0; j < num_quest; j++)
    {
        if(respostas[j] == gabarito[j])
        {
            nota[j]++;
        }
    }

    }
    
    // Nota da prova do aluno, calculo e amostragem da porcentagem de aprovação do aluno
    for (i = 0; i < alunos; i++)
    {
        for (j = 0; j < num_quest; j++)
        {
            porcentagem_aprovacao = porcentagem_aprovacao*100 / nota[j];
            printf("\nNota do aluno %d: %d\n",c++, nota[j]);
            printf("Porcentagem de aprovacao: %.0f%%\n", porcentagem_aprovacao );
        }
    }
        
    // Liberando os espaços das alocações dinâmicas de memória
    free(gabarito);
    free(respostas);
    
    return 0;
}
