#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Declaração de variáveis e quantidade de frutas determinada pelo usuário
    int qnt_frutas;
    int linha;
    printf("Digite a quantidade de frutas: ");
    scanf("%d", &qnt_frutas);
    
    // Declaração de variável com alocação dinâmica
    char** frutas = (char**) malloc(qnt_frutas*sizeof(char*));

    // Verificação se alocação foi bem sucedida ou não
    if(frutas == NULL)
    {
        printf("Erro de alocação.");
        exit(1);
    } 
      
    // Declaração de variáveis com alocação dinâmica
    for(linha = 0; linha < qnt_frutas; linha++)
    {
        frutas[linha] = (char*) malloc(50*sizeof(char));
    }
    float * preco = (float*) malloc(qnt_frutas*sizeof(int));

    // Verificação se alocação foi bem sucedida ou não
    if(preco == NULL)
    {
        printf("Erro de alocação.");
        exit(1);
    }

    // Preechimento da variável pelo usuário
    printf("informe as frutas e seu valor:\n");
    for (linha = 0; linha < qnt_frutas; linha++)
    {
        printf("Nome da fruta: ");
        scanf(" %[^\n]s", frutas[linha]);
        printf("Preco da fruta: ");
        scanf("%f", &preco[linha]);
    }

    // Liberação de memória
    for (linha = 0; linha < qnt_frutas; linha++)
    {
        free(frutas[linha]);
        free(&preco[linha]);

    }
    free(qnt_frutas);
    return 0;
}
