  //////////////////////
 // ARREGLOS SIMPLES //
//////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int A [5];
    int x = 0;
    
    A[0] = 10;
    A[1] = 15;
    A[2] = 77;
    A[3] = -20;
    A[4] = 1;
    
    for (x;x<=5;x++){
        printf("%d\n",A[x]);
    }
    
    return (0);
}
