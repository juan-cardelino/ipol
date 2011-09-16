#include <stdio.h>

int main(){
	int x = 0;
	int y = 1;
	int z = 2;
	int a,b,c,d,e;
	
	a = x + y*z;
	b = x==0 && y!=4;
	c = !z || y;
	d = y ? x : z;
	e = x - y < z;

	//Resultados
	printf("Resultados:\n");
	printf("x + y*z = %d\n",a);
	printf("x==0 && y!=4 = %d\n",b);
	printf("!z || y = %d\n",c);
	printf("y ? x : z = %d\n",d);
	printf("x - y < z = %d\n",e);
}
