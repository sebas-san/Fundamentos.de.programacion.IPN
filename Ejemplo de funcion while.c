

  //////////////////////////////
 //TABLA DE MULTIPLICAR DEL 1//
//        CON WHILE         //   
/////////////////////////////


#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x = 1;
    // 0,1,2,3,4,5
    int t = 1;
    int tope = 10;
    
    while(x<=tope){
        printf("%d X %d = %d\n",t,x,t*x);
        x = x + 1;
    }
    
    return (EXIT_SUCCESS);
}

