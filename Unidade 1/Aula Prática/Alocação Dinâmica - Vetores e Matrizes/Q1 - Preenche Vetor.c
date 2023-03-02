// Declaração de bibliotecas para funções básicas como, scanf e printf (stdio.h) e para fazer alocação de memória (stdlib.h) respectivamente.
#include<stdio.h>
#include<stdlib.h>

// Função principal
int main(){

    /* Declaração da variável tamanho tipo int que representará
    o tamanho do vetor a ser declarado dinâmicamente*/
    int tamanho = 10;
    int *vetor = (int*)malloc(tamanho*sizeof(int));
    
    if(vetor == NULL)
    {
        printf("\nErro de alocação de memória.");
        exit(1);
    }

    // Laço de repetição para preencher o vetor com seu índice
    for (int i = 0; i < tamanho; i++)
    {
        (vetor[i] = i);
        printf("valores do vetor: %d\n", vetor[i]);
    }

    // Liberação de memória da variável vetor
    free(vetor);

    return 0;
}
