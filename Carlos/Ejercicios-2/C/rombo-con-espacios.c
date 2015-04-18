#include <stdio.h>

int main(){
	
	int i = 0;
	int p = 0;
	int x = 0;
	int numero = 0;
	int espacios = 0;
	
	printf("Introduce la diagonal menor del rombo: ");
	scanf("%d", &numero);
	espacios = numero;
	
	for(i=0;i<numero;i++){
		for(x=0;x<espacios/2-1;x++){
			printf("_");
		}
		for(p=1;p<=i;p++){
			printf("+");
		}
		printf("\n");
		x = 0;
		espacios = espacios -1;
	}
	
	numero = numero - 1;
	espacios = numero;

	for(i=numero;i>0;i--){
		for(x=espacios/2-1;x>0;x--){
			printf("_");
		}
		for(p=1;p<i;p++){
			printf("+");
		}
		printf("\n");
		espacios = espacios +1;
		
	}	
	
	return 0;
}
