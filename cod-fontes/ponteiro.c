#include <stdio.h>

int main(){

	int a, *p;

	a = 10;

	printf("valor de a = %d\n", a);
	

	p = &a; // '*p' recebe o endereço de 'a'
	*p = 50;
	
	printf("valor de a = %d\n", a);
	

	return 0;
}