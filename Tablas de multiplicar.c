   //////////////////////////
  // Tablas de multiplicar//
 //      del 1 al 10     //
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //Variables
    int a,b,c,d;
    a = 1;
    b = 1;
    c = 10; //Multiplicar hasta...
    d = 10; //Hasta la tabla del... 
    
    //Ejecutar     
    while(a<=c){
        int b = 1;
        while(b<=d){
            printf("%d X %d = %d\n",a,b,b*a);
            b = b + 1;
        }
        printf("-------------\n",a);
        a = a + 1;
    }
    
    return (0);
}

