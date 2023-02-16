#include<stdio.h>

typedef enum mes
{
    JANEIRO, 
    FEVEREIRO, 
    MARCO, 
    ABRIL, 
    MAIO,
    JUNHO, 
    JULHO, 
    AGOSTO, 
    SETEMBRO, 
    OUTUBRO, 
    NOVEMBRO,
    DEZEMBRO, 
}Mes;

typedef struct data
{
    int dia;
    Mes mes;
    int ano;
}Data;

int main()
{
    Data data;
    printf("Digite o dia: ");
    scanf("%d", &data.dia);
    printf("Digite o mes: ");
    scanf("%d", &data.mes);
    printf("Digite o ano: ");
    scanf("%d", &data.ano);
    switch (data.mes)
    {
    case 0:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 1:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 2:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 3:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 4:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 5:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 6:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 7:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 8:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 9:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 10:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    case 11:
        printf("\nData: %d/%d/%d",data.dia, data.mes, data.ano);
        break;
    default:
        printf("\nOpcao invalida.");
        break;
    }
    printf("\n");
    return 0;
}
