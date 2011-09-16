#include <stdio.h>

int main(){
	int a = 1;
	printf("Arranco con a = %d.\n",a);

	//Cambiar el valor de un bit utilizando un entero donde solamente
	//hay un 1 en el bit a modificar.
	// 0000 0001 = 1
	// 0000 0010 = 2
	// 0000 0100 = 4
	// 0000 1000 = 8
	// 0001 0000 = 16
	// 0010 0000 = 32
	// 0100 0000 = 64
	// 1000 0000 = 128

	//Pongo el bit "bit" a uno:
	int bit_a_uno = 4;
	int entero = 1 << (bit_a_uno - 1);
	int b = a | entero;
	printf("Pongo el bit %d a 1, queda b = %d.\n",bit_a_uno,b);
	//Pongo el bit "bit" a cero:
	int bit_a_cero = 7;
	entero = 1 << (bit_a_cero - 1);
	a = 94;
	int c = a & (~entero);
	printf("Ahora arranco con a = %d.\n",a);
	printf("Pongo el bit %d a 0, queda c = %d.\n",bit_a_cero,c);
}
