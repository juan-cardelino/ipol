#include <stdio.h>

int main(){
    
    // Programa que defina un array de tamaño 10, recorra el array utilizando
    // punteros, e imprima en pantalla el valor de los enteros y su dirección
    // en memoria.
    
    int ai[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int *pi = ai;
    
    int i;
    printf("Address\t\tValue\tSize\n");
    for(i=0;i<10;i++){
        printf("%p\t%d\t%d\n",pi,*pi,sizeof(*pi));
        pi++;
    }
    
    
}