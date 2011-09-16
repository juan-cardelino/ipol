#include <stdio.h>

int main(){
	
	// Programa que dado un numero inicial <x> lo divide repetitivamente entre
	// <divisor> hasta que el cociente sea menor que 1.

	float x;
	printf("Ingrese el número a dividir (x): ");
	scanf("%f",&x);
	
	float divisor = 2;
	float cociente = x;
	int cuenta = 0;

	while(cociente>=1){
		cuenta++;
		cociente = cociente / 2;
	}

	printf("Se dividio %d veces al numero %f, hasta obtener %f, menor que 1.\n",cuenta, x, cociente);
}
