#include <stdio.h>

int main(){
	
	// Programa que modifique un arreglo de números flotantes según se especifique en un segundo arreglo de enteros. Cada número flotante se divide por el número entero correspondiente (igual indice) y en caso de ser nulo (el número entero) se deja incambiado. Los arreglos iniciales se definen explícitamente en su declaración.

	// VERSION CON WHILE

	float af[] = {2.5, 3.8, 2.4, 12.9, 7.1};
	int ai[] = {1, 2, 0, 4, 5};

	int i = 0;
	
	while (i < 5){
		if (ai[i]!=0){
			af[i] = af[i] / ai[i];
		}
		i++;
	}

	// Muestro el arreglo resultante:
	int j;
	for(j=0;j<5;printf("%f \n",af[j]), j++);

}
