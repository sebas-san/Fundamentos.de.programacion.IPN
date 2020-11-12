   //////////////////////////
  // Tablas de multiplicar//
 //      del 2 al 10     //
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    //variables
    int a,b,c;
    a = 1;
    b = 1;
    c = 10;
    
    //ejecutar     
    while(a<=c){
        a = a + 1;
        while(b<=c){
            printf("%d X %d = %d \n",a,b,b*a);
        
        }
    }
    
    return (0);
}
