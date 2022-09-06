#include <stdio.h>

int main(void) {    //Fun��o principal do programa 

    int a, b, c;   // Declara��o das vari�veis a, b e c.
    int *p1;       // Declara��o de um ponteiro p para int 
    int *p2 = &a;  // Declara��o do ponteiro p2. O ponteiro p2 recebe o valor de endere�o da vari�vel a 
    int *p3 = &c;  // Declara��o do ponteiro p3. O ponteiro p3 recebe o valor de endere�o da vari�vel c
    
    p1 = p2;           // p1 e p2 agora guarda o mesmo endere�o 
    *p2 = 10;          // o conte�do de p2, ou seja, o valor da vari�vel a agora � modificado para 10 
    b = 20;            //a vari�vel b armazena o valor 20 
    int **pp;          //Declara��o de ponteiro para ponteiro int
    pp = &p1;          //pp recebe o endere�o do ponteiro p1
    *p3 = **pp;        //o conte�do de p3, ou seja, o valor de c � modificado e agora assume o mesmo valor de a
    *p2 = b + (*p1)++; //o conte�do de p2, isto �, o valor de a � alterado

    printf("%d\t%d\t%d\n", a, b, c); //Impress�o do valor de a, b e c para o usu�rio. 

    return 0;

}

//Sa�da exibida pelo programa: 30     20      10