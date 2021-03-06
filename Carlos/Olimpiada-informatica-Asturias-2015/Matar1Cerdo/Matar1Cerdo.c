/* Carlos Manrique Enguita
 * Problema 1
 * Matar1Cerdo
*/
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define G  9.80665
#define PI 3.14159

float velocidad = 0;
float angulo = 0;
float distancia = 0;

void GradosARadianes();
void CalculoDistancia();

int main(){
	
	printf("\nAngry Birds!\nEl cerdo se encuentra a 70 metros.\n");
	printf("¿A qué velocidad quieres lanzar el pájaro? (0 para cerrar el programa)");
	scanf("%f", &velocidad);	
	if (velocidad==0){
			printf("Good Bye!\n");
			return 0;
	}
	else if(velocidad<0){
		system("clear");
		main();
	}
	
	else{
		printf("¿Con qué ángulo?");
		scanf("%f", &angulo);
		printf("Para un pájaro lanzado a una velocidad de %.0f metros por segundo\n\
con un ángulo de %.0f grados respecto a la horizontal\n", velocidad, angulo);
		GradosARadianes();
		CalculoDistancia();	
		printf("la distancia recorrida es de %.2f metros.\n", distancia);
		
		if (distancia<68){
			printf("Demasiado corto para matar al cerdo.\n");
		}
		else if (distancia>72){
			printf("Demasiado largo para matar al cerdo.\n");
		}
		else{
			printf("¡¡¡Has matado al cerdo!!!\n");
		}
	main();
	}	
	return 0;
}

void GradosARadianes(){
		angulo = (angulo*PI)/180;
}

void CalculoDistancia(){
		distancia = (pow(velocidad, 2)*sin(2*angulo))/G;
}
