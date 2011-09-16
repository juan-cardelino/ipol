#include <stdio.h>

int main(){
	char c;
	printf("\nIntroduzca un caracter:");
	c = getchar();
	printf("\nEl caracter introducido fue: %c.",c);
	printf("\nEl caracter anterior al caracter introducido es: %c.",c-1);
	printf("\nEl caracter siguiente al caracter introducido es: %c.",c+1);

	//con putchar:
	printf("\n");
	putchar(c);
	printf("\n");
	putchar(c-1);
	printf("\n");
	putchar(c+1);
	printf("\n");
} 
