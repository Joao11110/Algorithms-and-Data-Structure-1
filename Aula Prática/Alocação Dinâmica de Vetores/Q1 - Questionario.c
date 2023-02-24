/*Questão 1) Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Um número N de pessoas de ambos os sexos foi entrevistado, e o questionário
consistia em apenas duas perguntas: (i) o sexo do entrevistado (M/F) e (ii) sua opinião sobre o
produto (gostou/não gostou). Escreva um programa em C que:

a) leia as respostas contidas no questionário e armazene-as em dois arrays vinculados,
um deles contendo a resposta para a primeira pergunta e o outro contendo a resposta
para a segunda pergunta.

b) determine a porcentagem de pessoas do sexo feminino que responderam que
gostaram do produto.

c) determine a porcentagem de pessoas do sexo masculino que responderam que não
gostaram do produto.*/

// Incluindo bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Declarando variáveis 
    int i, j, num_pessoas, soma_F , soma_M;
    soma_F = soma_M = 0;

    // Quantidade de pessoas do questionário
    printf("Informa a quantidade de pessoas da pesquisa: ");
    scanf("%d", &num_pessoas);

    // Alocação de memória das variáveis
    char *sexo = (char*)malloc(num_pessoas * sizeof(char));
    char *opcao = (char*)malloc(num_pessoas * sizeof(char));
    
    // Verificação de a memória não foi feita
    if(sexo == NULL)
    {
        printf("\nErro de alocação de memória.");
        exit(1);
    }
    
    if(opcao == NULL)
    {
        printf("\nErro de alocação de memória.");
        exit(1);
    }

    // Questionário
    printf("Questionario\n");

    // Laço de repetição para guardar as variáveis
    for (i = 0; i < num_pessoas; i++)
    {
        printf("\nQual o seu sexo?\n(F)Feminino\n(M)Masculino\n\n");
        scanf(" %c", &sexo[i]);

        printf("\nVoce gostou do nosso produto?\n(S)Sim\n(N)Nao\n\n");
        scanf(" %c", &opcao[i]);
    }

    // Laço de repetição para somar as respostas dos questionários
    for(j = 0; j < num_pessoas; j++)
    {
        if((sexo[j] == 'F') && (opcao[j]) == 'S')
        {
            soma_F++;
        }
        if((sexo[j] == 'M') && (opcao[j]) == 'N')
        {
            soma_M++;
        }
    }

    // Fazendo a porcentagem dos resultados obtidos
    soma_F = ((soma_F*100.0f) / num_pessoas);
    soma_M = ((soma_M*100.0f) / num_pessoas);

    // Mostrando o resultado do questionário
    printf("\nResultados do questionario:\n\n");
    printf("%d%% - Publico feminino que gostou do produto: \n", soma_F);
    printf("%d%% - Publico masculino que nao gostou do produto: \n", soma_M);

    // Liberando memória das variáveis alocadas
    free(sexo);
    free(opcao);
    return 0;
}
