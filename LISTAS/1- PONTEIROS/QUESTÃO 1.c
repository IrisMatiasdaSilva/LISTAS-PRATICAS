#include <stdio.h>

int main (void){    //Fun��o principal do programa 

    int x, y, *p; // Declara��o das vari�veis.
    y = 0;     // Inicializa o valor de y como 0.
    p = &y;   // p armazena o endere�o de y.
    x = *p;  // x recebe o conte�do da vari�vel que p aponta.
    x = 4;   // valor de x � atualizado para 4.
    (*p)++;  // o valor de y � incrementado.
    --x;    //o valor de x � decrementado
    (*p) += x; //o conte�do da vari�vel que p aponta � atualizado.
    printf("%d %d %p", x,y, p); //impress�o do valor de x, y e p.
    
    return 0; 
}

//Resposta: 
//x = 3
//y = 4
//p : vai d� um endere�o.