/*Questão 4) Crie um programa para calcular a área e o perímetro de um hexágono. O seu
programa deve implementar uma função chamada calcula_hexagono que calcula a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro); A área e o perímetro de um
hexágono regular são dados, respectivamente, por:

A = 2l²√3/2 com P = 6l

Obs: Para os cálculos, utilize as funções sqrt e pow do módulo math da biblioteca
padrão de C. Em seguida, crie a função principal do programa e utilize a função
calcula_hexagono para calcular a área e o perímetro de um hexágono de lado l
informado pelo usuário.*/

// Incluindo bibliotecas
#include<stdio.h>
#include<math.h>

// Declaração de função para o calculo da área e do perimetro do hexágono
void calcula_hexagono(float largura, float *area, float *perimetro);

// Implementação e amostragem dos calculos
int main()
{
    float largura, *area, *perimetro ,a , p;
    printf("Digite a largura do hexagono: ");
    scanf("%f", &largura); 
    perimetro = &p, area = &a;
    calcula_hexagono(largura,area,perimetro);
    printf("\nArea: %.1f \nPerimetro: %.1f\n", a, p);
    return 0;
}

// Função que calcula a área e o perimetro do hexágono
void calcula_hexagono(float largura, float *area, float *perimetro)
{
    *area = (3 * pow(largura, 2) * sqrt(3)) / 2;
    *perimetro = 6*largura;  
}
