#include<stdio.h>
#include<stdlib.h>

int main(){

    // Declarações de variáveis
    int tamanho = 10;
    int *vetor = (int*)malloc(tamanho*sizeof(int));

    // Laço de repetição
    for (int i = 0; i < tamanho; i++)
    {
        (vetor[i] = i);
        printf("valores do vetor: %d\n", vetor[i]);
    }
    
   // Liberação de memória 
   free(vetor);

   return 0;
}
