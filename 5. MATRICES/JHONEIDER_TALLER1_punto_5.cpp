#include <stdio.h>
#include <iostream>
#define L 3
using namespace std;

int contador=1;

int EsNumeroPrimo(int numero){
	int divisiones = 0;
	
	if(numero==1){
		return true;
	}

	for(int i = 1; i <= numero;i++){
		if(numero%i==0){
			divisiones++;
		}
		
		if(divisiones > 2){
			return false;
		}
	}
	
	if(divisiones == 2){
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[]) {
	
	char PuntoARevisar='0';
	int numero=0;
	
	printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
	printf("5. MATRICES : seleccione la letra del punto que desee revisar \n\n");
	
	printf("a) CREAR UNA MATRIZ DE 3X3 DONDE EL USUARIO COMPLETA SUS VALORES DESDE EL TECLADO Y AL FINAL \n");
	printf("IMPRIMIR LA MATRIZ Y LA SUMA DE CADA UNA DE SUS POSICIONES.\n");
	printf("b) CREAR UNA MATRIZ DE 3X3 Y LLENARLA DE MANERA AUTOMATICA POR EL SISTEMA.\n");
	printf("c) CREAR UNA MATRIZ DE 3X3 Y LLENARLA DE MANERA AUTOMATICA POR EL SISTEMA CON NUMEROS PRIMOS.\n\n");
	
	printf("\n PUNTO : ");
	scanf("%c",&PuntoARevisar);
	
	printf("\n \n");
	
	if(numero<0){printf("ENTRADA DE NUMERO NO VALIDA");return(0);}
	int matriz[L][L];
	int proximonumeroprimo = 0;
	
	
	switch(PuntoARevisar){
	case 'a':
	case 'A':
		for(int c = 0; c < L; c++){
			for(int f = 0; f < L; f++){
				printf(" \n INGRESE EL NUMERO DE LA POSICION (%d , %d) : ",c,f);
				scanf("%d",&matriz[c][f]);
			}
			printf(" \n");
		}
		
		printf(" \n");
		
		for(int c = 0; c <= 2; c++){
			for(int f = 0; f <= 2; f++){
				printf("%d ",matriz[c][f]);
			}
			printf(" \n");
		}
		
		break;
		
	case 'B':
	case 'b':
		
		for(int c = 0; c < L; c++){
			for(int f = 0; f < L; f++){
			   matriz[c][f] = contador; 
			   contador++;
			}
			printf(" \n");
		}
		
		printf(" \n");
		
		for(int c = 0; c <= 2; c++){
			for(int f = 0; f <= 2; f++){
				printf("%d ",matriz[c][f]);
			}
			printf(" \n");
		}
		
		break;
		
	case 'C':
	case 'c':
		
		
		for(int c = 0; c < L; c++){
			for(int f = 0; f < L; f++){
				 while(EsNumeroPrimo(proximonumeroprimo)==false){
					 proximonumeroprimo++;
				 }
				matriz[c][f] = proximonumeroprimo; 
				proximonumeroprimo++;
			}
			printf(" \n");
		}
		
		printf(" \n");
		
		for(int c = 0; c <= 2; c++){
			for(int f = 0; f <= 2; f++){
				printf("%d ",matriz[c][f]);
			}
			printf(" \n");
		}
		
		break;
		
	default:
		printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) ) \n");
	}
	
	
	return 0;
}

