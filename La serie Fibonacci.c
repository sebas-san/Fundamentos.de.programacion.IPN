
  ///////////////////
 //SERIE FIBONACCI//
///////////////////

#include <stdio.h>
#include <stdlib.h>

//Susecion de fibonacci
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,… 
int main(int argc, char** argv) {
    
//Variables
    int x = 0; 
    int y = 1; 
    int z = 0; //numero generado
    int n = 0; //cantidad de numeros generados
    int i = 1; //Contador
    
//Ejecutar
    printf ("Cuantos numeros quieres? ");
    scanf ("%d",&n);
    while(i<=n) {
        x=y;
        y=z;
        z=x+y;
        i=i+1;
       
        printf("%d, ",z);
    }
    
    return (0);
}
