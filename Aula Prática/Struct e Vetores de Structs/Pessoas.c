#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa
{
    char nome[50];
    int documento;
    int idade;
}Pessoa;

void Preenche(Pessoa * P, int qnt){
    int i;
    for (i = 0; i < qnt; i++)
    {
        printf("\nDigite o seu nome:\n");
        scanf(" %[^\n]s",&P[i].nome);
        printf("\nDigite o numero do seu documento:\n");
        scanf(" %d",&P[i].documento);
        printf("\nDigite a sua idade:\n");
        scanf(" %d",&P[i].idade);
    }   
}

void Imprime(Pessoa * I, int qnt){
    int i;
    for (i = 0; i < qnt; i++)
    {
        printf("\nDados da Pessoa %d\n", i+1);
        printf("\nNome: %s\n", I[i].nome);
        printf("\nNumero do documento: %d\n", I[i].documento);
        printf("\nIdade: %d\n", I[i].idade);
    }   
}

void Idade(Pessoa * P, int qnt){
    int i;
    int NovaIdade;
    char opcao;
    printf("\nDeseja mudar a idade de alguem: (sim = s, nao = n)\n", i+1);
    scanf(" %[^\n]s", &opcao);
    if (opcao == 's')
    {
        for (i = 0; i < qnt; i++)
        {
            printf("Digite o nova idade: ");
            scanf("%f", &NovaIdade);
            P[i].idade = NovaIdade;
            printf("\nDados atualizados para a Pessoa %d:\n", i+1);
            printf("\nNome: %s\nIdade: %.2f\n\n",P[i].nome, P[i].idade);
        }  
    }
    else
    {
        printf("\nOperacao cancelada.\n");
    }
}

void MenorMaior(Pessoa * M, int qnt){
    int i;
    int maior = 0;
    int menor = 0;
    for (i = 0; i < qnt; i++)
    {
        if (M[i].idade > maior)
        {
            maior = M[i].idade;
        }
        else if (M[i].idade > menor)
        {
            menor = M[i].idade;
        }     
    }

    printf("\nPessoa com maior idade:\nIdade: %d\n", maior);
    printf("\nPessoa com menor idade:\nIdade: %d\n", menor);
}

int main()
{
    int qntPessoas;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &qntPessoas);
    Pessoa * pessoa = (Pessoa*) malloc(qntPessoas*sizeof(Pessoa)); 
    Preenche(pessoa, qntPessoas);
    Imprime(pessoa, qntPessoas);
    Idade(pessoa, qntPessoas);
    MenorMaior(pessoa, qntPessoas);
    free(pessoa);
    return 0;
}
