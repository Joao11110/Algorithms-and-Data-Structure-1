// Questão 1) Quais serão os valores de x, y e p ao final do trecho de código abaixo:

#include<stdio.h>

int main(){  
    int x, y, *p;
    y = 0;      // x = 0, y = 0, *p = 0
    p = &y;     // x = 0, y = 0, *p = 0
    x = *p;     // x = 0, y = 0, *p = 0
    x = 4;      // x = 4, y = 4, *p = 0
    (*p)++;     // x = 4, y = 4, *p = 1
    --x;        // x = 3, y = 4, *p = 1
    (*p) += x;  // x = 3, y = 4, *p = 4
    return 0;
}
/* Apenas verifiquei para qual variável o ponteiro estava relacionado e
assim segui fazendo as contas e atualizando os valores até que se chegasse ao return 0.
Valor final: x = 3, y = 4, *p = 4 */
