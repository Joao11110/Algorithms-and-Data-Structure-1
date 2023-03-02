#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    // Declaração de variáveis em alocamento dinâmico
    char * nome_completo = (char*)malloc(100*sizeof(char));

    // Verificação se a não obteve sucesso
    if(nome_completo == NULL)
    {
        printf("Erro");
        exit(1);
    }

    // Inserindo os nomes digitados pelo usuário
    printf("Digite seu nome: ");
    scanf(" %[^\n]s", nome_completo);

    // Imprimindo os nomes digitados pelo usuário
    nome_completo = (char*) realloc(nome_completo, strlen(nome_completo)*sizeof(char)+1);
    printf("Nome digitado: %s \nTamanho do nome: %d\n", nome_completo, strlen(nome_completo));

    // Liberando a memória de variáveis de alocamento dinâmico
    free(nome_completo);
  
    return 0;
}
