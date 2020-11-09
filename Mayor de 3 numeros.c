

  //////////////////////
 //MAYOR DE 3 NUMEROS//
//////////////////////


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

//Variables
float A = 3;
float B = 2;
float C = 1;

//Ejecutar
if (A==B && B==C){
    printf("los 3 numeros son iguales");
} else{
    if (A>B && A>C){
        printf("A es mayor");
    } else{
        if (B>A && B>C){
            printf("B es mayor");
        } else {
            if (C>A && C>B){
                printf("C es mayor");
            }
        }
    }
}
 
return (EXIT_SUCCESS);
}