#include<stdio.h>

// Declaração da função que adiciona dois números
int adiciona (int num1, int num2);

/* Implemantação: O Usuário digita dois números,
esses são passados para a função adiciona que retorna
o valor da soma.*/
int main()
{
    int num1, num2, soma;
    printf("Primeiro numeros: ");
    scanf("%d", &num1);
    printf("\nSegundo numero: ");
    scanf("%d",&num2);
    soma = adiciona(num1, num2);
    printf("\nSoma: %d\n", soma);
    return 0;
}

// Função somando os dois números e retornando seu respectivo valor
int adiciona (int num1, int num2)
{
    int i, soma = 0;
    for(i = num1; i <= num2; i++)
    {   
        soma = soma + i;
    }
    return(soma);
}
