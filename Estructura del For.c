  ///////////////////////
 // ESTRUCTURA DEL FOR//
///////////////////////

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
//    for(Inicio;Condcional;Variable
//    EJEMPLO:
//    for(x = 0;x<=17;x++)
    
    int x,y;
    x = 0;
    y = 0;
    
    for(x=1;x<=15;x++){
        
        for(y=1;y<5;y++){
            printf("%d",x*y);
        }
    }
                            
    return (0);
}

