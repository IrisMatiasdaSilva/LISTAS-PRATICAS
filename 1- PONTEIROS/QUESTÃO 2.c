#include <stdio.h>

int main(void) { //Função principal do programa 

    int x, *p; // Declara um inteiro(int) x e um ponteiro int para p. 
    x = 100;  // Atribui o valor 100 a x.
	p = x; //Aqui tem um erro na declaração, já que devia ser p = &x; para  que p receba o endereço de x.  
    printf("Valor de p = %p\tValor de *p = %d", p, *p);

    return 0;
}

 /*
    a) A mensagem é de erro.
    b) Porque faltou colocar o operador de endereço, onde tem p = x deveria ser p = &x, desta forma a atribuição ao ponteiro foi feita de forma errada. 
    c) Não foi bem sucedida.
    d) Ok.
    e) Sim. Agora foi bem sucedida.
 */
    