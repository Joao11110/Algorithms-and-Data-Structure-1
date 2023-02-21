#include<stdio.h>
#include<stdlib.h>

// Função que cria uma matriz tipo int
int ** CriaMatriz (int linha, int coluna)
{
    int N_linhas;
    int ** matriz = (int**) malloc(linha*sizeof(int*));

    if(matriz == NULL)
    {
        printf("Erro!");
        exit(1);
    }

    for (N_linhas = 0; N_linhas < linha; N_linhas++)
    {
        matriz[linha] = (int*) malloc(coluna*sizeof(int));
        if(matriz == NULL)
        {
        printf("Erro!");
        exit(1);
        }
    }

    return matriz;
}

// Finção principal
int main()
{
    int i, j;
    int M; // linhas
    int N; // colunas

    printf("Digite numero de linha da matriz: ");
    scanf("%d", &M);
    printf("Digite numero de colunas da matriz: ");
    scanf("%d", &N);

    char ** matriz = CriaMatriz(M, N);

    printf("Digite ponto ""."" para o mar e hashtag ""#"" para a terra: ");
    for ( i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%s", matriz[i][j]);
        }  
    }

    printf("\nMatriz:\n");

    for ( i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
             printf("%s", matriz[i][j]);
        }  
    }

    for (i = 0; i < M; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
    
    
    return 0;
}
