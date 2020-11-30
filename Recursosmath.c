   ///////////////////////////
  // Recursos y funciones: //
 //        MATH.H         //
///////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x = 15.75; //numero de ejemplo
float y = 2;

int main(int argc, char** argv) {
    
    printf("Funciones de math.h:\n");
    printf("\n sqrt(x) Raíz cuadrada.\nEjemplo: √%f = %f \n",x,sqrt(x));
    printf("\n exp(x) Funcion exponencial.\nEjemplo: %fe = %f \n",x,exp(x));
    printf("\n log(x) Logaritmo natural.\nEjemplo: Log(%f) = %f\n",x,log(x));
    printf("\n log10(x) Logaritmo base 10.\nEjemplo: Log10(%f) = %f\n",x,log10(x));
    printf("\n fabs(x) Valor absoluto.\nEjemplo: Valor absoluto de %f = %f\n",x,fabs(x));
    printf("\n ceil(x) Redondea a X al entero mas grande.\nEjemplo: %f se redondea a %f\n",x,ceil(x));
    printf("\n floor(x) Redondea a X al entero más pequeño.\nEjemplo: %f se redondea a %f\n",x,floor(x));
    printf("\n pow(x,y) X es elevado a la potencia Y (x^y).\nEjemplo: %f^%f = %f\n",x,y,pow(x,y));
    printf("\n fmod(x,y) Residuo de XfY como un numero flotante.\nEjemplo: %f es residuo de %f\n",fmod(x,y),x);
    printf("\n sin(x) Seno trigonometrico de X (X está en redianes).\nEjemplo: sin(%f) = %f\n",x,sin(x));
    printf("\n cos(x) Coseno trinogometrico de X (X está en radianes).\nEjemplo: cos(%f) = %f\n",x,cos(x));
    printf("\n tan(x) Tangente trigonometrica de X (X está en radianes).\nEjemplo: tan(%f) = %f\n",x,tan(x));
    
    return (0);
}
