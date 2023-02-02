#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int qnt_frutas;
    printf("Digite a quantidade de frutas: ");
    scanf("%d", &qnt_frutas);

    char** frutas = (char**) malloc(qnt_frutas*sizeof(char*));
    if(frutas == NULL)
    {
        printf("Erro de alocação.");
        exit(1);
    }   

    int linha;
    for(linha = 0; linha < qnt_frutas; linha++)
    {
        frutas[linha] = (char*) malloc(50*sizeof(char));
    }

    float * preco = (float*) malloc(qnt_frutas*sizeof(int));

    if(preco == NULL)
    {
        printf("Erro de alocação.");
        exit(1);
    }

    printf("informe as frutas e seu valor:\n");
    for (linha = 0; linha < qnt_frutas; linha++)
    {
        scanf(" %[^\n]s", frutas[linha]);
        scanf("%f", &preco[linha]);
    }

    for (linha = 0; linha < qnt_frutas; linha++)
    {
        free(frutas[linha]);
    }
    
    free(qnt_frutas);
    
    return 0;
}
