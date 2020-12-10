
  //////////////////////////
 // MENÚ DE TEMPERATURAS //
//////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int opc,opc_cel,opc_far,opc_kel,opc_0;
    float c,f,k;
    c = 0;
    f = 0;
    k = 0;
    
    /*Funciones*/
    void cel_far();
    void cel_kel();
    
    void far_cel();
    void far_kel();
    
    void kel_cel();
    void kel_far();
    
    
    /*Ejecutar*/
    
    do{
       printf("\n¿En qué grados está tu temperatura?\n\n");
       printf("  1. CELCIUS\n");
       printf("  2. FARENHEIT\n");
       printf("  3. KELVIN\n\n");
       printf("  4. SALIR\n");
       
       scanf("%d",&opc);
       system("clear");
       
       switch(opc)
       {
           /*TRANSFORMAR CON CELCIUS*/
           do{
               case 1:{
                   printf("\n¿A qué grados quieres transformar?\n");
                   printf(  "  1. FARENHEIT\n");
                   printf(  "  2. KELVIN\n\n");
                   printf(  "  3. VOLVER\n");
                   
                   scanf("%d",&opc_cel);
                   system("clear");
                   
                   switch(opc_cel){
                           do{
                                case 1:
                                    cel_far();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                           
                           do{
                                case 2:
                                    cel_kel();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                   }
               }   
               break;
           }while(opc_cel !=3);
           
           /*TRANSFORMAR CON FARENHEIT*/
           do{
               case 2:{
                   printf("\n¿A qué grados quieres transformar?\n");
                   printf(  "  1. CELCUIS\n");
                   printf(  "  2. KELVIN\n\n");
                   printf(  "  3. VOLVER\n");
                   
                   scanf("%d",&opc_far);
                   system("clear");
                   
                   switch(opc_far){
                           do{
                                case 1:
                                    far_cel();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                           
                           do{
                                case 2:
                                    far_kel();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                   }
               }   
               break;
           }while(opc_far !=3);
           
           /*TRANSFORMAR CON KELVIN*/
           do{
               case 3:{
                   printf("\n¿A qué grados quieres transformar?\n");
                   printf(  "  1. CELCUIS\n");
                   printf(  "  2. FARENHEIT\n\n");
                   printf(  "  3. VOLVER\n");
                   
                   scanf("%d",&opc_kel);
                   system("clear");
                   
                   switch(opc_kel){
                           do{
                                case 1:
                                    kel_cel();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                           
                           do{
                                case 2:
                                    kel_far();
                                    printf("----------------------------------\n");
                                    printf("Realizar otra conversión?\n"
                                           "  1. SI\n"
                                           "  2. NO, VOLVER AL MENÚ DE CONVERSION\n");
                                    scanf("%d",&opc_0);
                                    system("clear");
                                    break;
                           }while(opc_0 !=2);
                   }
               }   
               break;
           }while(opc_kel !=3);
       }
       
    }while(opc !=4);
    
    return (0);
}

/*Funciones*/

    /*celcius a farenheit*/
    void cel_far(){
        printf("\nIngrese la temperatura en °C: ");
        float c = 0;
        
        scanf("%f",&c);
        float f = (c*1.8+32);
        
        printf("\n%f°C equivalen a %f°F\n",c,f);
        system("cmd /c pause");
    }
    
    /*celcius a kelvin*/
    void cel_kel(){
        printf("\nIngrese la temperatura en °C: ");
        float c = 0;
        
        scanf("%f",&c);
        float k = (c+273.15);
        
        printf("\n%f°C equivalen a %f°K\n",c,k);
        system("cmd /c pause");
    }
    
    /*farenheit a celcuis*/
    void far_cel(){
        printf("\nIngrese la temperatura en °F: ");
        float f = 0;
        
        scanf("%f",&f);
        float c = ((f-32)*5/9);
        
        printf("\n%f°F equivalen a %f°C\n",f,c);
        system("cmd /c pause");
    }
    
    /*farenheit a kelvin*/
    void far_kel(){
        printf("\nIngrese la temperatura en °F: ");
        float f = 0;
        
        scanf("%f",&f);
        float k = f + 273.15;
        
        printf("\n%f°C equivalen a %f°K\n",f,k);
        system("cmd /c pause");
    }
    
    /*kelvin a celcius*/
    void kel_cel(){
        printf("\nIngrese la temperatura en °C: ");
        float c = 0;
        
        scanf("%f",&c);
        float k = (c+273.15);
        
        printf("\n%f°C equivalen a %f°K\n",k,c);
        system("cmd /c pause");
    }
    
     /*kelvin a farenheit*/
    void kel_far(){
        printf("\nIngrese la temperatura en °K: ");
        float f = 0;
        
        scanf("%f",&f);
        float k = f + 273.15;
        
        printf("\n%f°C equivalen a %f°K\n",k,f);
        system("cmd /c pause");
    }