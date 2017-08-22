#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	char PuntoARevisar='0';
	int numero=0;
	int resultado=0;

	printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
	printf("2. CICLO FOR : seleccione la letra del punto que desee revisar \n");
	
	printf("a) IMPRIMIR LAS TABLAS DE MULTIPLICAR DE UN NUMERO, DEL 1 AL 20 \n");
	printf("b) SOLUCIONAR EL FACTORIAL DE UN NUMERO \n");
	printf("c) SOLUCIONAR EL NUMERO DE FIBONACCI");
	printf("\n PUNTO : ");
	scanf("%c",&PuntoARevisar);
	printf("\n INGRESE EL NUMERO : ");
	scanf("%d",&numero);
	printf("\n \n");
	
	int antecesor=0;
	int sucesor=1;
	
	if(numero<0){printf("ENTRADA DE NUMERO NO VALIDA");return(0);}
	
	switch(PuntoARevisar){
	case 'a':
	case 'A':
		for(int contador=1; contador <= 20;contador++)
		{
			resultado = numero * contador;
			printf("%d X %d = %d \n",numero,contador,resultado);
		}
		break;
	case 'B':
	case 'b':
		if(numero==0){
			printf("El numero factorial de 0 es 1 \n");
		}
		else{
			resultado = 1;
			for(int contador=1; contador <= numero;contador++)
			{
				resultado *= contador;
			}
			printf("El numero factorial de %d es %d \n",numero,resultado);
		}
		break;
	case 'C':
	case 'c':
		printf("SERIE FIBONACCI HASTA %d (numeros de la serie)\n",numero);
		for(int conteo=0; conteo < numero;conteo++)
		{
			if(conteo==0){
				printf("%d \n",antecesor);
			} else if(conteo==1){
				printf("%d \n",sucesor);
			} else{
				resultado=antecesor+sucesor;
				antecesor=sucesor;
				sucesor=resultado;
				printf("%d \n",resultado);
			}
		}
		break;
	default:
		printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) ) \n");
	}
	
	return 0;
}
