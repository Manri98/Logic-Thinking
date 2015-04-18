#include <stdio.h>

#define G 0.00000006673

int main(){	
	
	double masa1 = 0;
	double masa2 = 0;
	double distancia = 0;
	long double fuerza = 0;	
	
	printf("Introduce la masa del primer cuerpo: ");
	scanf("%lf", &masa1);
	printf("\nIntroduce la masa del segundo cuerpo: ");
	scanf("%lf", &masa2);
	printf("\nIntroduce la distancia: ");
	
	scanf("%lf", &distancia);			
	
	fuerza = G*masa1*masa2/distancia*distancia;	
	
	printf("\nLa fuerza gravitacional es: %ld Dinas.", &fuerza);	
	
	return 0;
}

