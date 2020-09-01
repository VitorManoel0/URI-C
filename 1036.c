#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double a,b,c;
	
	scanf(" %lf %lf %lf", &a, &b, &c);
	
	double delta = ((b*b) - (4 * a * c));
	
	

	if (a != 0 && delta > 0){
		double x1 = (-b + sqrt(delta))/(2*a);
		double x2 = (-b - sqrt(delta))/(2*a);
		
		printf("R1 = %.5lf\n", x1);
		printf("R2 = %.5lf\n", x2);
		
	}
	else{
		printf("Impossivel calcular\n");	
	}
	return 0;
}

