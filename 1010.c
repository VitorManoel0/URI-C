#include <stdio.h>

int main()
{
	int a,a1,b,b1;
	double c,c1,valor;
	
	scanf(" %d %d %lf" ,&a,&b,&c);
	scanf(" %d %d %lf" ,&a1,&b1,&c1);
	
	valor = ((b*c)+(b1*c1));
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valor);
	
	return 0;
}

