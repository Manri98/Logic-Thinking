#include "stdio.h" 
#include "stdlib.h" 
#include "time.h" 

main() 
{ 
      int Randi; 
      
      srand (time(NULL));/*genera una semilla distinta utilizando el reloj del sistema*/ 
      Randi=1+rand()%6; 
        
      printf("\n\n\t %d \n\n\n",Randi);/*Traza para comprobar de que en cada ejecucion se genera un 
      numero aleatorio distinto*/ 

      system ("Pause"); 
} 
