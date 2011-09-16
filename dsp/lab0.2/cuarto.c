#include <stdio.h>

int main(){
    
    // 1.- definir estuctura persona:
    typedef struct {
        float peso;
        int edad;
        char sexo;
    } persona;
    
    // 2.- investigar tamaño de la estructura con sizeof:
    int tamano_persona;
    tamano_persona = sizeof(persona);
    printf("Tamaño estructura persona: %d.\n",tamano_persona);
    
    // prueba:
    persona p1;
    persona p2;
    persona p3;
    
    // 3.- definir estructura estudiante:
    typedef struct {
        float peso;
        int edad;
        char sexo;
        char nota;
    } estudiante;
    int tamano_estudiante;
    tamano_estudiante = sizeof(estudiante);
    printf("Tamaño estructura estudiante: %d.\n",tamano_estudiante);
    
    // 4.- definir esturctura estudiante2, orden: peso, sexo, edad, nota:
    typedef struct {
        float peso;
        char sexo;
        int edad;
        char nota;
    } estudiante2;
    int tamano_estudiante2;
    tamano_estudiante2 = sizeof(estudiante2);
    printf("Tamaño estructura estudiante2: %d.\n",tamano_estudiante2);
    
}