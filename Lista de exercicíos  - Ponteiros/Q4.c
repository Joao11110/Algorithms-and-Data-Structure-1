#include<stdio.h>
#include<math.h>

// Declaração de função para o calculo da área e do perimetro do hexágono
void calcula_hexagono(float largura, float *area, float *perimetro);

// Implementação e amostragem dos calculos
int main()
{
    float la, *ar, *per,a , p;
    printf("Digite a largura do hexagono: ");
    scanf("%f", &la); 
    per = &p, ar = &a;
    calcula_hexagono(la,ar,per);
    printf("\nArea: %.1f \nPerimetro: %.1f\n", a, p);
    return 0;
}

// Função que calcula a área e o perimetro do hexágono
void calcula_hexagono(float largura, float *area, float *perimetro)
{
    *area = (3 * pow(largura, 2) * sqrt(3)) / 2;
    *perimetro = 6*largura;  
}
