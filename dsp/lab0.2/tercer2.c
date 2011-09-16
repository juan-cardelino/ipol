#include <stdio.h>

#define MAX_ENTEROS 20

void print_greater_than_previous_ind(int* pi){
    // Función que recibe un puntero a un arreglo de enteros de tamaño MAX_ENTEROS
    // e imprime los números que sean mayores que el número en la posición
    // anterior del array.
    // VERSION INDICES
    
    int i;
    int ai_aux[MAX_ENTEROS];
    int* pi_aux = pi;
    for (i=0;i<MAX_ENTEROS;i++){
        ai_aux[i] = *pi_aux;
        pi_aux++;
    }
    for (i=0;i<MAX_ENTEROS;i++){
        if ( i==0 ){
            printf("%d ",ai_aux[i]);
        } else {
            if (ai_aux[i]>ai_aux[i-1]){
                printf("%d ",ai_aux[i]);
            }
        }
    }
}

void print_greater_than_previous_pun(int* pi){
    // Función que recibe un puntero a un arreglo de enteros de tamaño MAX_ENTEROS
    // e imprime los números que sean mayores que el número en la posición
    // anterior del array.
    // VERSION PUNTEROS
    
    int i;
    for( i=0 ; i<MAX_ENTEROS; i++){
        if ( i==0 ){
            printf("%d ",*pi);
        } else {
            if (*pi>*(pi-1)){
                printf("%d ",*pi);
            }
        }
        pi++;
    }
}

int main(){
    
    int ai[MAX_ENTEROS] = {1,2,4,3,7,5,10,4,3,2,8,9,12,14,3,1,9,1,20,2};
    //                     | | |   |   |        | | |  |      |   |
    int *pi = ai;
    
    // Imprimo arreglo original:
    printf("Arreglo original:\n");
    int i;
    for( i=0 ; i<MAX_ENTEROS ; i++){
        printf("%d ",ai[i]);
    }
    printf("\n");
    
    // VERSION INDICES
    printf("Version con indices:\n");
    print_greater_than_previous_ind(pi);
    printf("\n");
    
    // VERSION PUNTEROS
    printf("Version con punteros:\n");
    print_greater_than_previous_pun(pi);
    printf("\n");
}