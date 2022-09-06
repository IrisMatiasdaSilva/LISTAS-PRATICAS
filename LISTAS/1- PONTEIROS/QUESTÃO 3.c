#include <stdio.h>

int main(void) {    //Função principal do programa 

    int a, b, c;   // Declaração das variáveis a, b e c.
    int *p1;       // Declaração de um ponteiro p para int 
    int *p2 = &a;  // Declaração do ponteiro p2. O ponteiro p2 recebe o valor de endereço da variável a 
    int *p3 = &c;  // Declaração do ponteiro p3. O ponteiro p3 recebe o valor de endereço da variável c
    
    p1 = p2;           // p1 e p2 agora guarda o mesmo endereço 
    *p2 = 10;          // o conteúdo de p2, ou seja, o valor da variável a agora é modificado para 10 
    b = 20;            //a variável b armazena o valor 20 
    int **pp;          //Declaração de ponteiro para ponteiro int
    pp = &p1;          //pp recebe o endereço do ponteiro p1
    *p3 = **pp;        //o conteúdo de p3, ou seja, o valor de c é modificado e agora assume o mesmo valor de a
    *p2 = b + (*p1)++; //o conteúdo de p2, isto é, o valor de a é alterado

    printf("%d\t%d\t%d\n", a, b, c); //Impressão do valor de a, b e c para o usuário. 

    return 0;

}

//Saída exibida pelo programa: 30     20      10