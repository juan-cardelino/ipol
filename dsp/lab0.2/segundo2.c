#include <stdio.h>

int main(){
    
    // Programa que defina un array de tamaño 10, recorra el array utilizando
    // punteros, e imprima en pantalla el valor de los enteros y su dirección
    // en memoria.
    
    char ai[10] = {'e', 'N', 'g', 'I', 'n', 'E', 'e', 'r', ':', ')'};
    char *pi = ai;
    
    int i;
    printf("Address\t\tValue\tSize\n");
    for(i=0;i<10;i++){
        printf("%p\t%c\t%d\n",pi,*pi,sizeof(*pi));
        pi++;
    }
    
    
}