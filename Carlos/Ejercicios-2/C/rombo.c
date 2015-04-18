#include <stdio.h>

int main(){
	
	int i = 0;
	int p = 0;
	int numero = 0;
	
	printf("Introduce la diagonal menor del rombo: ");
	scanf("%d", &numero);
	
	for(i=0;i<numero;i++){
		for(p=1;p<=i;p++){
			printf("+");
		}
		printf("\n");
	}
	numero = numero - 1;
	for(i=numero;i>0;i--){
		for(p=1;p<i;p++){
			printf("+");
		}
		printf("\n");
	}	
	
	return 0;
}


