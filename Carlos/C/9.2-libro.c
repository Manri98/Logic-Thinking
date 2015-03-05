//EL P*** TRIANGULO DE PASCAL//

#include <stdio.h>

int main(){	
	
	int altura = 0;
	int array[100];
	int i = 0;          // d p i son controladores de for's
	int p = 0;
	int d = 0;
	int indice = 0;
	
	printf("Introduce la altura del triangulo(1-100):");   //introducimos altura
	scanf("%d", &altura);
	
	for(i=0;i<altura;i++){  //Rellenamos el array de 0's
		array[i] = 1;
	}
	
	array[0] = 1;
		
	for(i=0;i<altura;i++){
		indice = i;

		for(d=0;d<=altura-i-1;d++){        //Imprime los espacios que forman el margen izquierdo 		
			printf(" ");			
		}
				
		for(p=0;p<i;p++){                  //Imprime el triangulo
			printf("%d", array[indice]);
			printf(" ");
			indice = indice - 1;
			array[indice] = array[indice] + array[indice-1];
		}
		indice = i;
		printf("%d", array[indice]);  //Imoprime el margen de 1's de la derecha
		printf("\n");
	}
	return 0;
}


