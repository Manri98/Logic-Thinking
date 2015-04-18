/* Carlos Manrique Enguita
 * Problema 2
 * Matar3Cerdos
*/
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define G  9.80665
#define PI 3.14159

float velocidad = 0;
float angulo = 0;
float distancia = 0;
int cerdo = 50;
int puntuacion = 0;

void GradosARadianes();
void CalculoDistancia();
void ValidarTiro();
void MostrarInfo();

int main(){
	
	printf("\nAngry Birds!\nEl cerdo se encuentra a %i metros.\n", cerdo);
	printf("¿A qué velocidad quieres lanzar el pájaro? (0 para cerrar el programa)");
	scanf("%f", &velocidad);	
	if (velocidad==0){
			printf("Good Bye!\nHas matado %i cerdos.\n", puntuacion);
			return 0;
	}
	else if(velocidad<0){
		system("clear");
		main();
	}
	
	else{
		printf("¿Con qué ángulo?");
		scanf("%f", &angulo);
		MostrarInfo();
		ValidarTiro();
	cerdo = cerdo+10;
	if(cerdo>70){
		printf("Good game and good bye!\nHas matado %i cerdos.\n", puntuacion);
		return 0;		
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

void ValidarTiro(){
	if (distancia<(cerdo-2)){
		printf("Demasiado corto para matar al cerdo.\n");
	}
	else if (distancia>(cerdo+2)){
		printf("Demasiado largo para matar al cerdo.\n");
	}
	else{
		printf("¡¡¡Has matado al cerdo!!!\n");
		puntuacion++;
	}	
}

void MostrarInfo(){
		printf("Para un pájaro lanzado a una velocidad de %.0f metros por segundo\n\
con un ángulo de %.0f grados respecto a la horizontal\n", velocidad, angulo);
		GradosARadianes();
		CalculoDistancia();	
		printf("la distancia recorrida es de %.2f metros.\n", distancia);	
}










