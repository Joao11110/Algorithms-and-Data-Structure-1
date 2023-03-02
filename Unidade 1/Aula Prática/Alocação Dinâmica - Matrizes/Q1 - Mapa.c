#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    // Variáveis do tipo inteiro para for, linhas, colunas e a costa
    int i, j;
    int m; // linhas
    int n; // colunas
    int costa = 0;

    // Usuário inserindo os valores da matriz
    printf("Digite numero de linha da matriz: ");
    scanf("%d", &m);
    printf("Digite numero de colunas da matriz: ");
    scanf("%d", &n);
    
    // Alocação dinâmica da matriz mapa
    char **mapa = (char**) malloc(m*sizeof(char*));
    if (mapa == NULL)
    {
        printf("\nErro de alocacao!\n");
        exit(1);
    }
    for (i = 0; i < m;i++)
    {
        mapa[i] = (char*) malloc(n*sizeof(char));
        if ((mapa[i])==NULL)
        {
            printf("\nErro de alocacao!\n");
        }  
    }

    // Usuário digitando o mapa
    printf("\nDigite um mapa utilizando '.' e '#' de acordo com a legenda abaixo:\n\nLegenda:\n\n'.' = agua\n'#' = terra\n");
    for (i = 0; i < m;i++)
    {
        printf("\nEscreva a %d linha com %d caracteres:\n", i+1, n);
        scanf(" %[^\n]", mapa[i]);
    }

    //Imprimindo o mapa que o usuário digitou
    printf("\nMapa digitado:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("%s",mapa[i]);
        printf("\n");
    }

    // For com if ou else if para cada possibilidade de existir uma costa no mapa
    for (i = 0; i < m; i++)
    {
        for (j = 0;j < n;j++)
        {
            if ((mapa[i][j]) == '#')
            {
                if (i == 0)
                {
                    if (j == 0 && (mapa[i][j+1]) == '.')
                    {
                        costa++;
                    }
                    else if ( j == n-1 && (mapa[i][j-1]) == '.')
                    {
                        costa++;
                    }
                    else if ((mapa[i][j-1]) == '.' || (mapa[i][j+1]) == '.' || (mapa[i+1][j]) == '.')
                    {
                        costa++;
                    }
                }

                else if (i == m-1)
                {
                    if (j == 0 && (mapa[i][j+1]) == '.')
                    {
                        costa++;
                    }
                    else if ( j == n-1 && (mapa[i][j-1]) == '.')
                    {
                        costa++;
                    }
                    else if ((mapa[i][j-1]) == '.' || (mapa[i][j+1]) == '.' || (mapa[i-1][j]) == '.')
                    {
                        costa++;
                    }
                }

                else if (j == 0)
                {
                    if((mapa[i][j+1]) == '.' || (mapa[i-1][j]) == '.' || (mapa[i+1][j]) == '.')
                    {
                        costa ++;
                    }
                }

                else if (j == n-1)
                {
                    if((mapa[i][j-1]) == '.' || (mapa[i-1][j]) == '.' || (mapa[i+1][j]) == '.')
                    {
                        costa ++;
                    }
                }

                else if ((mapa[i][j-1]) == '.' || (mapa[i][j+1]) == '.' || (mapa[i-1][j]) == '.' || (mapa[i+1][j]) == '.')
                {
                        costa++;
                }
            }
        }              
    }

    // Imprimindo o resultado da número de costas
    printf("\nO tamanho da costa e igual a: %d", costa);

    // Liberando a memória da matriz mapa
    for(i = 0; i < m;i++){
        free(mapa[i]);
    }
    free(mapa);
    return 0;
}
