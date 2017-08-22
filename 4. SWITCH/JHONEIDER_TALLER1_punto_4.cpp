#include <stdio.h>

using namespace std;


int main(int argc, char *argv[]) {
	char PuntoARevisar='0';
	int numero=0;
	int opcion=0;
	
	
	printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
	printf("4. SWITCH : seleccione la letra del punto que desee revisar \n\n");
	
	printf("a) CONSULTAR EL MES DEL SISTEMA E IMPRIMIR EL MES EN ESPAÑOL .\n");
	printf("b) CREAR UN PROGRAMA QUE DEVUELVA EL CODIGO ASCII DE UNA VOCAL INGRESADA .\n");
	printf("c) CREAR UN PROGRAMA QUE DEVUELVA EL CODIGO ASCII DE UN NUMERO INGRESADO DEL 0 AL 9 .\n\n");
	
	printf("\n PUNTO : ");
	scanf("%c",&PuntoARevisar);
	
	printf("\n \n");
	
	if(numero<0){printf("ENTRADA DE NUMERO NO VALIDA");return(0);}
	
	switch(PuntoARevisar){
	case 'a':
	case 'A':
		
		printf("INGRESE EL NUMERO DEL MES : ");
		scanf("%d",&opcion);
		printf("\n \n");
		
		switch(opcion){
		case 1:
			printf("ENERO \n");
			break;
		case 2:
			printf("FEBRERO \n");
			break;
		case 3:
			printf("MARZO \n");
			break;
		case 4:
			printf("ABRIL \n");
			break;
		case 5:
			printf("MAYO \n");
			break;
		case 6:
			printf("JUNIO \n");
			break;
		case 7:
			printf("JULIO \n");
			break;
		case 8:
			printf("AGOSTO \n");
			break;
		case 9:
			printf("SEPTIEMBRE \n");
			break;
		case 10:
			printf("OCTUBRE \n");
			break;
		case 11:
			printf("NOVIEMBRE \n");
			break;
		case 12:
			printf("DICIEMBRE \n");
			break;
		default:
			printf("EL NUMERO NO CORRESPONDE A UN MES \n");
		}
		
		break;
		
	case 'B':
	case 'b':
		printf("INGRESE EL NUMERO DE LA VOCAL : \n");
		printf("1.A  \n");
		printf("2.E  \n");
		printf("3.I  \n");
		printf("4.O  \n");
		printf("5.U  \n\n");
		scanf("%d",&opcion);
		printf("\n \n");
		
		switch(opcion){
		case 1:
			printf("El codigo ASCII de la vocal (a) es 97 y de (A) es 65 \n");
			break;
		case 2:
			printf("El codigo ASCII de la vocal (e) es 101 y de (E) es 69 \n");
			break;
		case 3:
			printf("El codigo ASCII de la vocal (i) es 105 y de (I) es 73 \n");
			break;
		case 4:
			printf("El codigo ASCII de la vocal (o) es 111 y de (O) es 79 \n");
			break;
		case 5:
			printf("El codigo ASCII de la vocal (u) es 117 y de (U) es 85 \n");
			break;
		default:
			printf("EL NUMERO NO HACE REFERENCIA A UNA VOCAL \n");
		}
		
		break;
		
	case 'C':
	case 'c':
		
		printf("INGRESE EL NUMERO DEL 0 AL 9 : ");
		
		scanf("%d",&opcion);
		printf("\n \n");
		
		switch(opcion){
		case 0:
			printf("El codigo ASCII del 0 es : 48 \n");
			break;
		case 1:
			printf("El codigo ASCII del 1 es : 49 \n");
			break;
		case 2:
			printf("El codigo ASCII del 2 es : 50 \n");
			break;
		case 3:
			printf("El codigo ASCII del 3 es : 51 \n");
			break;
		case 4:
			printf("El codigo ASCII del 4 es : 52 \n");
			break;
		case 5:
			printf("El codigo ASCII del 5 es : 53 \n");
			break;
		case 6:
			printf("El codigo ASCII del 6 es : 54 \n");
			break;
		case 7:
			printf("El codigo ASCII del 7 es : 55 \n");
			break;
		case 8:
			printf("El codigo ASCII del 8 es : 56 \n");
			break;
		case 9:
			printf("El codigo ASCII del 9 es : 57 \n");
			break;
		default:
			printf("EL DEBE SER DEL 0 AL 9 \n");
		}
		
		break;
		
	default:
		printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) ) \n");
	}
	
	return 0;
}

