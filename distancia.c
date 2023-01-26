#include<stdio.h>
#include<math.h>

void calcula_distancia(float *distancia, float x1, float y1, float x2, float y2);

int main(){
    float distancia, x1, y1, x2, y2;
    scanf("%f %f %f %f",&x1, &x2, &y1, &y2);
    calcula_distancia(&distancia, x1, x2, y1, y2);
    printf("Distancia: %f", distancia);
    return (0);
}

void calcula_distancia(float *distancia, float x1, float y1, float x2, float y2){
    *distancia = sqrt (pow(y2-y1,2) + pow(x2-x1,2));
}