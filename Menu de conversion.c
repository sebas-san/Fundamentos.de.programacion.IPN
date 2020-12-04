
  //////////////////////////
 // MENÚ DE TEMPERATURAS //
//////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char** argv) {
    
    int opcion;
    float temp,vartemp,res;
    
    /*Funciones*/
    float cel_far(float);
    float cel_kev();
    
    float far_cel();
    float far_kev();
    
    float kev_cel();
    float kev_far();
    
    /*Ejecutar*/
    
        /*aqui se pide la temperatura, no importa si es celcius, kelvin o farenheit. eso se determinará en la linea 25*/
       printf("Introduce en número la temperatura que quieres transformar: ");
       scanf("%f",&temp);
       vartemp=temp;
       
    do{   
       printf("\n¿En qué grados está tu temperatura?\n\n");
       printf("  1. CELCIUS\n");
       printf("  2. FARENHEIT\n");
       printf("  3. KELVIN\n\n");
       printf("  4. SALIR\n");
   
       scanf("%d",&opcion);
       switch(opcion)
       {
          do{
                case 1: 
                printf("\n¿A qué temperatura quieres transformar %f°C?\n"
                        "  1. FARENHEIT\n"
                        "  2. KELVIN\n\n"
                        "  3. VOLVER\n",temp);
                
                scanf("%d",&opcion);
                switch(opcion)
                {
                    case 1:
                        
                        float cel_far (float vartemp){
        float res = ((vartemp-32)*(5/9));
        return res;
    }
                        printf("\n%f°C equivalen a %f°F\n"
                               "----------------------------------\n",temp,res);
                    break;
                    
                    case 2:
                        printf("\n%f°C equivalen a %f°K\n"
                               "----------------------------------\n",temp,res);
                    break;            
                }
            }while(opcion !=3);    
           break;
           
           case 2: 
               printf("hola\n");
           break;
           
           case 3: 
               printf("hola\n");
           break;
       }
       
    }while(opcion !=4);
    
    return (EXIT_SUCCESS);
}

/*Prototipos de funciones*/
    /*celcius a farenheit*/
    float cel_far (float vartemp){
        float res = ((vartemp-32)*(5/9));
        return res;
    }