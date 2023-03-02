#include<stdio.h>

int main(void)
{
    int nlinhas = 0, c;
    FILE* fp = fopen("entrada.txt", "rt");
    if (fp == NULL)
    {
        printf("Erro de abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("Arquivo criado com sucesso!\n");
    }
    while ((c = fgetc(fp))!= EOF)
    {
        if (c == '\n')
        {
            nlinhas++;
        }
    }
    printf("Numero de linhas: %d\n",nlinhas);
    return 0;
}
