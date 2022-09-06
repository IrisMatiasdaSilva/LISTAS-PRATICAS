#include <stdio.h>  
#include <stdlib.h>
#include <math.h>

//Estrutura para representar retângulos (dadas a base e a altura) 
typedef struct ret{ 
    float base; //Declaração da variavel base
    float altura;//Declaração da variavel altura
} Ret; 

//Estrutura para representar círculos (dado o raio)
typedef struct circ{
    float raio; //Declaração da variavel raio
} Circ;

//Letra A
Ret * ret_circunscrito(Circ *c, float h){ //Protótipo 
    Ret *r= malloc(sizeof(Ret)); //Alocar dinamicamente Ret
	r->base = 2 * sqrt(pow(c->raio, 2) - pow(h, 2)); //Formula
    r->altura = h;
    return r; //Retornando r
}

//Letra B
Circ * circ_interno(Ret *r){  //Protótipo 
    Circ *c = malloc(sizeof(Circ)); //Alocar dinamicamente Circ
    c->raio = sqrt(pow(r->base, 2) + pow(r->altura, 2)) / 2;
    return c; //Retornando c
}
