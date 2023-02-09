#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct funcionario
{
    char nome[50];
    float salario;
    int identificador;
    char cargo[30];
}Funcionario;

void Preenche(Funcionario * F1, int qnt_funcionarios)
{
    int i = 0;
    printf("\nPreencha os dados do funcionario %d\n", i+1);
    printf("\nDigite o nome do funcionario: ");
    scanf(" %[^\n]s",&F1->nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f",&F1->salario);
    printf("Digite o identificador do funcionario: ");
    scanf("%d",&F1->identificador);
    printf("Digite o cargo do funcionario: ");
    scanf(" %[^\n]s",&F1->cargo);  
    i+1; 
}

void Imprime(Funcionario * F1, int qnt_funcionarios)
{
    int i = 0;
    printf("\nDados do funcionario %d\n", i+1);
    printf("Nome: %s\n",F1->nome);
    printf("Salario: %.2f\n",F1->salario);
    printf("Identificador: %d\n",F1->identificador);
    printf("Cargo: %s\n",F1->cargo);
    i+1;
}

void AlteraSalario(Funcionario * F1, int qnt_funcionarios)
{
    int i;
    char opcao;
    float novo_salario;
    printf("\nDeseja alterar o valor do salario do funcionario %s?", F1->nome); 
    printf("(Sim = s, Nao = n)\n");
    scanf(" %[^\n]s", &opcao);
    if(opcao == 's')
    {
        printf("\nDigite o valor do novo salario: ");
        scanf("%f", &novo_salario);
        F1->salario += novo_salario;
        printf("\nNovo salario de funcionario %s: %.2f\n", F1->nome, F1->salario);
    }

    else
    {
        printf("Operacao cancelada.");
    } 
}

void ComparaSalario(Funcionario * F1, int qnt_funcionarios)
{
    int i;
    float maior_salario, menor_salario;
    if(F1->salario > F1->salario)
    {
        maior_salario = F1->salario;
        printf("\nMaior salario - Funcionario %s:\nCargo: %s\nSalario: %f\n",F1->nome, F1->cargo, maior_salario);
    }
    if (F1->salario < F1->salario)
    {
        menor_salario = F1->salario;
        printf("\nMenor salario - Funcionario %s:\nCargo: %s\nSalario: %f\n",F1->cargo, menor_salario);
    }
}

int main()
{
    int qnt_funcionarios, i;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qnt_funcionarios);
    Funcionario * F1 = (Funcionario*) malloc(qnt_funcionarios*sizeof(Funcionario));
    for (i = 0; i < qnt_funcionarios; i++)
    {
        Preenche(F1, qnt_funcionarios);
        Imprime(F1, qnt_funcionarios);
        AlteraSalario(F1, qnt_funcionarios);
        ComparaSalario(F1, qnt_funcionarios);
    }

    for (i = 0; i < qnt_funcionarios; i++)
    {
        free(qnt_funcionarios);
    }

    free(F1);

    return 0;
}
