#include <stdio.h>

int main(void) { //Fun��o principal do programa 

    int x, *p; // Declara um inteiro(int) x e um ponteiro int para p. 
    x = 100;  // Atribui o valor 100 a x.
	p = x; //Aqui tem um erro na declara��o, j� que devia ser p = &x; para  que p receba o endere�o de x.  
    printf("Valor de p = %p\tValor de *p = %d", p, *p);

    return 0;
}

 /*
    a) A mensagem � de erro.
    b) Porque faltou colocar o operador de endere�o, onde tem p = x deveria ser p = &x, desta forma a atribui��o ao ponteiro foi feita de forma errada. 
    c) N�o foi bem sucedida.
    d) Ok.
    e) Sim. Agora foi bem sucedida.
 */
    