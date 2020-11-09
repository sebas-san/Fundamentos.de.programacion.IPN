
  ///////////////////
 //SERIE FIBONACCI//
///////////////////

#include <stdio.h>
#include <stdlib.h>

//Susecion de fibonacci
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,… 
int main(int argc, char** argv) {
    
//Variables
    float x = 0; //numero inicial 1
    float y = 1; //numero inicial 2
    float z; //numero generado
    float n; //cantidad de numeros generados
    float i = 1; //Contador
    
//Ejecutar
    printf ("Cuantos numeros quieres?");
    scanf (n)
    
    while (i<=n)
    {
        x=y;
        y=z;
        z=x+y;
        i++;
        printf(z);
    }
    
    return (0);
}

