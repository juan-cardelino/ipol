#include <stdio.h>

int main(){
	
	// Programa que imprime el cuadrado de los primeros 10 enteros.
	int primero = 1;	
	int ultimo = 10;
	int i,i2;

	for(i = primero; i <= ultimo; i++){
		i2 = i*i;
		printf("%d al cuadrado es %d.\n",i,i2);
	}
}
