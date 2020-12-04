/* 
 * File:   Funciones.c
 * Author: s a n c h e Z
 *
 * Created on 1 de diciembre de 2020, 02:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

//definicion del prototipo de la funcion

float multiplicar (float,float);
float areatriangulo(float,float);

int main(int argc, char** argv) {
    int x = 0;
    float base, altura;
    printf("Dime la base de tu triangulo.\nB:");
    scanf("%f",base);
    printf("Dime la altura de tu tirangulo.\nA:");
    scanf("%f",altura)
    
    
    
    return (EXIT_SUCCESS);
}

//funcion ya implementada ()
float multiplicar (float x, float y){
    float res= x*y;
    return res;
}

float areatriangulo(float base,float altura){
    float res = (base*altura)/2;
    return res;
}

