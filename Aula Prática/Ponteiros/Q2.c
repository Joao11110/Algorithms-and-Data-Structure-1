/* Questão 2) Considere o trecho de código abaixo: Se tentarmos compilar o programa
(não o compile ainda), você acha que o compilador nos fornece alguma mensagem?
Se sim, responda: */

#include<stdio.h>

int main(void){
    int x, *p;
    x = 100;
    p = &x; // d) caractere "&" adicionado.
    printf("Endereco de p = %p \tValor de *p = %d", p, *p);
    return 0; // d) "return 0;" adicionado.
}

/*

a) Esta mensagem é de erro ou advertência? 
Advertência.

b) Por que o compilador emite tal mensagem? 
Porque o valor da variável "x" não está sendo passado para o ponteiro com o caractere "&".

c) Compile e execute o programa. A execução foi bem sucedida? 
Sim, mas o terminal mostrava endereços de memória da variável e não seu valor.

d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
pelo compilador.

e) Compile e execute novamente o programa. A execução foi bem sucedida? 
Sim.

*/
