   //////////////////////////
  // Tablas de multiplicar//
 //       con for        //
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
    for(a=1;a<=c;a++){
        int b=1;
        for(b=1;b<=d;b++){
            printf("%d X %d = %d\n",a,b,b*a);
        }
        printf("-------------\n");
    }
    
    return (0);
}
