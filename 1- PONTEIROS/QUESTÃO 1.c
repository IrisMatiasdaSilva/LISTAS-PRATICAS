#include <stdio.h>

int main (void){    //Função principal do programa 

    int x, y, *p; // Declaração das variáveis.
    y = 0;     // Inicializa o valor de y como 0.
    p = &y;   // p armazena o endereço de y.
    x = *p;  // x recebe o conteúdo da variável que p aponta.
    x = 4;   // valor de x é atualizado para 4.
    (*p)++;  // o valor de y é incrementado.
    --x;    //o valor de x é decrementado
    (*p) += x; //o conteúdo da variável que p aponta é atualizado.
    printf("%d %d %p", x,y, p); //impressão do valor de x, y e p.
    
    return 0; 
}

//Resposta: 
//x = 3
//y = 4
//p : vai dá um endereço.