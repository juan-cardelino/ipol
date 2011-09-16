#include <stdio.h>

int main(){
	int a = 3;
	int b = 10;
	int sum;
	sum = a + b;
	printf("La suma de %d y %d da: %d.\n",a,b,sum);

	float div;
	div = a/b;
	printf("El cociente entre %d y %d da (sin cast a float): %f.\n",a,b,div);

	float div2;
	div2 = (float)a/(float)b;
	printf("El cociente entre %d y %d da (con cast a float): %f.\n",a,b,div2);
}
