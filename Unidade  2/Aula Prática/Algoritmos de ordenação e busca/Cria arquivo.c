#include<stdio.h>

int main(void)
{
    FILE* fp = fopen("entrada.txt", "wt");
    if (fp == NULL)
    {
        printf("Erro de abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }

    int valor = fclose(fp);
    if (valor != 0)
    {
        printf("Nao foi possival fechar o arquivo!\n");
    }
    else
    {
        printf("O arquivo foi fechado\n");
    }

    return 0;
}
