

  //////////////////////
 //MAYOR DE 4 NUMEROS//
//////////////////////


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

//Variables
float A = 10;
float B = 100;
float C = 705;
float D = 50;

//Ejecutar
if (A==B && B==C && C==D){
    printf("Todos los numeros son iguales");
} else{
     if (A>B && A>C && A>D){
        printf("A es mayor");
    } else{
         if (B>A && B>C && B>D){
            printf("B es mayor"); 
         } else {
             if (C>A && C>B && C>D){
                printf("C es mayor");
             } else{
                printf ("D es mayor");                
            }
        }
    }
}

return (EXIT_SUCCESS);
}