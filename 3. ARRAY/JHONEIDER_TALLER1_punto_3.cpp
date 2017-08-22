#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	char PuntoARevisar='0';
	int numero=0;

	printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
	printf("3. ARRAY : seleccione la letra del punto que desee revisar \n\n");

	printf("a) DECLARAR UN ARRAY DE NUMERICOS DECIMALES E INTRODUCE EN EL CUATRO \n");
	printf("ELEMENTOS QUE SEAN 32.583 , 11.239, 45.781 , 22.237 A CONTINUACION \n");
	printf("MUESTRA POR PANTALLA TODOS LOS ELEMENTOS.\n \n");
	printf("b) PEDIRLE AL USUARIO QUE INGRESE DOS VALORES Y DE ACUERDO A LOS  \n");
	printf("VALORES INGRESADO, MOSTRAR EN PANTALLA UN ARREGLO DE NUM1 X NUM2, \n");
	printf("QUE CONTENGA CEROS Y UNOS \n \n");
	printf("c) CREAR UN ARREGLO DE DIMENSION 4X4, Y PEDIRLE AL USUARIO QUE  \n");
	printf("INGRESE 4 NUMEROS. EN LA PRIMERA COLUMNA MOSTRAR LOS NUMEROS  \n");
	printf("INGRESADOS POR EL USUARIO,EN LA SEGUNDA COLUMNA EL NUMERO  \n");
	printf("ELEVADO AL CUADRADO, EN LA TERCERA EL NUMERO ELEVADO AL CUBO  \n");
	printf(" Y EN LA CUARTA COLUMNA EL NUMERO ELEVADO A LA CUARTA. IMPRIMIR  \n");
	printf("EN PANTALLA EL RESULTADO DEL ARREGLO.  \n\n");

	printf("\n PUNTO : ");
	scanf("%c",&PuntoARevisar);

	printf("\n \n");

	if(numero<0){printf("ENTRADA DE NUMERO NO VALIDA");return(0);}
	float Valores[] = {32.583,11.239,45.781,22.237};
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int unoycero = 0;

	switch(PuntoARevisar){
	case 'a':
	case 'A':
		for(int a = 0; a < 4; a++){
			printf("%.3f \n",Valores[a]);
		}
		break;
	case 'B':
	case 'b':
		printf("INGRESE EL VALOR 1 : ");
		scanf("%d",&num1);
		printf(" \n INGRESE EL VALOR 2 : ");
		scanf("%d",&num2);

		printf(" \n");

		//printf("%d %d \n",num1,num2);

		int arreglo[100][100];


		//ingresar datos al arreglo
		for(int f=0;f < num1;f++){

			for(int c=0;c < num2;c++){
				arreglo [f][c] = unoycero;

				if(unoycero == 0){
					unoycero=1;
				} else {
					unoycero=0;
				}
			}
		}

		//imprimir arreglo en pantalla
		for(int f=0;f < num1;f++){
			for(int c=0;c < num2;c++){
				printf("%d ",arreglo[f][c]);
			}
			printf(" \n");
		}

		break;
	case 'C':
	case 'c':
		printf("INGRESE EL VALOR 1 : ");
		scanf("%d",&num1);
		printf(" \n INGRESE EL VALOR 2 : ");
		scanf("%d",&num2);
		printf(" \n INGRESE EL VALOR 3 : ");
		scanf("%d",&num3);
		printf(" \n INGRESE EL VALOR 4 : ");
		scanf("%d",&num4);
		printf(" \n");

		int arregloC[4][4];

		for(int f=0;f <= 3;f++){
			if(f==0){
				arregloC[0][f] = num1;
				arregloC[1][f] = num2;
				arregloC[2][f] = num3;
				arregloC[3][f] = num4;
			} else {
				arregloC[0][f] = floor(pow(num1,(f + 1)));
				arregloC[1][f] = floor(pow(num2,(f + 1)));
				arregloC[2][f] = floor(pow(num3,(f + 1)));
				arregloC[3][f] = floor(pow(num4,(f + 1)));
			}
		}

		for(int f=0;f <= 3;f++){
			for(int c=0;c <= 3;c++){
				printf("%d ",arregloC[f][c]);
			}
			printf(" \n");
		}

		break;
	default:
		printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) ) \n");
	}

	return 0;
}

