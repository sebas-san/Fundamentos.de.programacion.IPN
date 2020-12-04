  /////////////////////////
 // ARRAY 100 ELEMENTOS //
/////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int A[100];
    int x = 0;
    
    int i = 0;
    int c = 0;
    /////////
    A[0] = 2;
    A[1] = 3;
    
    for (i;i<=100;i+1){
        A[0] = A[1];
        A[1] = c;
        c = A[0] + A[1];
        
        printf("Arreglo[%d] = %d\n",i++,A[x]);
        
    }
    return (0);
}
