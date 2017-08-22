#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	char PuntoARevisar='0';
	
				printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
				printf("1. CICLO WHILE : seleccione la letra del punto que desee revisar \n");
				
				printf("a) SUMAR LOS NUMEROS DEL 1 AL 100 \n");
				printf("b) SUMAR LOS NUMEROS PARES DEL 1 AL 50 \n");
				printf("c) SUMAR LOS NUMEROS IMPARES DEL 1 AL 50 \n");
				
					printf("\n PUNTO : ");
					scanf("%c",&PuntoARevisar);
					
					int sumatoria = 0;
					int contador = 1;
					
					switch(PuntoARevisar){
					case 'a':
					case 'A':
						while(contador <= 100){
							sumatoria+=contador;
							contador++;
						}
						printf("El resultado de la suma de los numeros del 1 al 100 es : %d \n",sumatoria);
						
						break;
					case 'B':
					case 'b':
						while(contador <= 50){
							if(contador%2==0){
								sumatoria+=contador;
							}
							contador++;
						}
						printf("El resultado de la suma de los numeros pares del 1 al 50 es : %d \n",sumatoria);
						
						break;
					case 'C':
					case 'c':
						while(contador <= 50){
							if(contador%2!=0){
								sumatoria+=contador;
							}
							contador++;
						}
						printf("El resultado de la suma de los numeros impares del 1 al 50 es : %d \n",sumatoria);
						
						break;
					default:
						printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) ) \n");
					}
	
	return 0;
}

	

