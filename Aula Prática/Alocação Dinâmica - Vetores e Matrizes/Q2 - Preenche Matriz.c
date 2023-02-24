#include <stdio.h>
#include <stdlib.h>

// Função que cria matriz to tipo inteiro
int ** CriaMatrizInt(int linhas, int colunas)
{
    // Criação das linhas da matriz
    int ** matriz = (int**) malloc(linhas*sizeof(int*));

    // Verificação se a alocação não pôde ser feita
    if(matriz == NULL)
    {
        printf("Erro!");
        exit(1);
    }

    // Criação das colunas da matriz
    int linha;
    for(linha = 0; linha < linhas; linha++)
    {
        matriz[linha] = (int*) malloc(colunas*sizeof(int));
      
        // Verificação se a alocação não pôde ser feita
        if(matriz[linha] == NULL)
        {
          printf("Erro!");
          exit(1);
        }
    }
    return matriz;
}

int main(void)
{
    // Declaração de variáveis, variável dinâmica e chamada da função que cria uma matriz tipo int
    int linhas = 3;
    int colunas = 3;
    int ** matriz = CriaMatrizInt(linhas, colunas);
    int i, j;

    // Preenchendo a matriz
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            matriz[i][j] = i*3 + j;
        }
    }

    // Imprimindo os valores da matriz
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
    }

    // Liberação de memória da alocação dinâmica
    for (i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz);    

    return 0;
}
