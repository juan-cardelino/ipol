#include <stdio.h>

void intercambiar(int *pa, int *pb){
	// Funcion que recibe dos punteros a enteros e intercambia los valores 
        // de los enteros entre sí.

	int aux = *pa;
	*pa = *pb;
	*pb = aux;
}

void intercambiar2(int a, int b){
	
	int aux = a;
	a = b;
	b = aux;
}

int main(){
	
	int a = 10;
	int b = 20;

	printf("POR REFERENCIA:\n");
	printf("---------------\n");
	printf("Antes de intercambiar: a = %d y b = %d.\n",a,b);
	intercambiar(&a,&b);
	printf("Después de intercambiar: a = %d y b = %d.\n",a,b);
	printf("\n");

	a = 10;
	b = 20;

	printf("POR VALOR:\n");
	printf("----------\n");
	printf("Antes de intercambiar: a = %d y b = %d.\n",a,b);
	intercambiar2(a,b);
	printf("Después de intercambiar: a = %d y b = %d.\n",a,b);
	printf("\n");
}


