// Questão 3) Qual será a saída exibida pelo programa a seguir:

#include <stdio.h>
    int main(void){
        int a, b, c, d;
        int *p1;
        int *p2 = &a;
        int *p3 = &c;
        p1 = p2;
        *p2 = 10;                               // a = 10, b = 0, c = 0, d = 0
        b = 20;                                 // a = 10, b = 20, c = 0, d = 0
        int **pp;                               // a = 10, b = 20, c = 0, d = 0
        pp = &p1;                               // a = 10, b = 20, c = 0, d = 0
        *p3 = **pp;                             // a = 10, b = 20, c = 10, d = 0
        int *p4 = &d;                           // a = 10, b = 20, c = 10, d = 0
        *p4 = b + (*p1)++;                      // a = 11, b = 20, c = 10, d = 30
        printf("%d\t%d\t%d\t%d\n", a, b, c, d); // a = 11, b = 20, c = 10, d = 30.
    return 0;
}

/*

Observe que, se int *p é uma variável do tipo ponteiro para inteiro, então int **pp é uma
variável do tipo ponteiro para ponteiro de inteiro, isto é, uma varável que poderá armazenar o
endereço de um ponteiro do tipo int.

Verifiquei as variáveis as quais os ponteiros estavam
relacionados e assim segui fazendo as contas e atualizando os
valores até que se chegasse ao return 0.

A saída será: a = 11, b = 20, c = 10, d = 30.

*/
