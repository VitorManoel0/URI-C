#include <stdio.h>

int main()
{
	const double pi = 3.14159;
	
	double area,raio;
	
	scanf("%lf",&raio);
	
	area = pi * (raio*raio);
	
	printf("A=%.4lf\n",area);
	
	
	return 0;
}

