#include <stdio.h>

using namespace std;

struct alumno {
	char nombre[30];
	float nota1;
	float nota2;
	float nota3;
}DatosAlumnos[50];

struct promedio {
		float nota1;
		float nota2;
		float nota3;
};

struct competidor {
	char nombre[30];
	int edad;
	char sexo[10];
	char club[20];
}DatosCompetidor[50];


struct alumno2 {
	char nombre[30];
	char sexo[10];
	int edad;
    struct promedio promedio_estudiante2;
}DatosAlumnos2, DatosAlumnosN2[50];

int Contador= 0;
int ingresar = 1;
float promedio = 0;

int main(int argc, char *argv[]) {

	char PuntoARevisar='0';
	int numero=0;
	int opcion=0;


	printf("TALLER No 1 EDII - JHONEIDER HINCAPIE AGUIRRE \n");
	printf("6. ESTRUCTURAS : seleccione la letra del punto que desee revisar \n\n");

	printf("a) ESCRIBIR UN PROGRAMA QUE PERMITA INGRESAR EL NOMBRE Y 3 NOTAS DE N ALUMNOS Y \n");
	printf("LOS ALMACENE EN UN ARRAY DE ESTRUCTURA. MOSTRAR LOS ALUMNOS INGRESADOS INCLUYENDO SU PROMEDIO \n");
	printf("ORDENADO POR ORDEN DE MERITO. \n\n");
	printf("b) HACER UNA ESTRUCTURA LLAMADA COMPETIDOR, EN LA CUAL SE TENDRAN LOS SIGUIENTES CAMPOS : \n");
	printf("NOMBRE - EDAD - SEXO - CLUB , PEDIR DATOS AL USUARIO PARA UN COMPETIDOR Y ASIGNARLE UNA CATEGORIA DE COMPETICION: \n");
	printf("INFANTIL <= 15 AÑOS - JOVEN <= 30 AÑOS - MAYOR > 30 AÑOS. \n");
	printf("POSTERIORMENTE IMPRIMIR TODOS LOS DATOS DEL COMPETIDOR, INCLUIDA SU CATEGORIA DE COMPETICION. \n\n");
	printf("c) HACER 2 ESTRUCTURAS UNA LLAMADA PROMEDIO QUE TENDRA LOS SIGUIENTES CAMPOS : NOTA1, NOTA2, NOTA3 Y OTRA LLAMADA ALUMNO \n");
	printf("QUE TENDRA LOS SIGUIENTES MIEMBROS: NOMBRE, SEXO, EDAD; HACER QUE LA ESTRUCTURA PROMEDIO ESTE ANIDADA EN LA ESTRUCTURA ALUMNO \n");
	printf("LUEGO PEDIR TODOS LOS DATOS PARA UN ALUMNO, LUEGO CALCULAR SU PROMEDIO, Y POR ULTIMO IMPRIMIR TODOS SUS DATOS INCLUIDOS EL PROMEDIO. \n\n");
	printf("d) HACER EL MISMO EJERCICIO ANTERIOR PERO ESTA VEZ PARA N ALUMNOS Y QUE RETORNE EL MEJOR PROMEDIO Y MENOR PROMEDIO, JUNTO A LOS DATOS DEL ALUMNO.\n");

	printf("\n PUNTO : ");
	scanf("%c",&PuntoARevisar);

	printf("\n \n");

	if(numero<0){printf("ENTRADA DE NUMERO NO VALIDA");return(0);}

	switch(PuntoARevisar){
	case 'a':
	case 'A':
		Contador= 0;

		do{
			printf("INGRESE EL NOMBRE DEL ESTUDIANTE %d : ",Contador+1);
			scanf("%s",DatosAlumnos[Contador].nombre);
			//fgets(,30,stdin);
			printf("\n INGRESE LA NOTA1 : ");
			scanf("%f",&DatosAlumnos[Contador].nota1);
			printf("\n INGRESE LA NOTA2 : ");
			scanf("%f",&DatosAlumnos[Contador].nota2);
			printf("\n INGRESE LA NOTA3 : ");
			scanf("%f",&DatosAlumnos[Contador].nota3);
			Contador++;

			printf("\n\n DESEA INGRESAR OTRO ESTUDIANTE (1. SI) (2. NO) : ");
			scanf("%d",&ingresar);
			printf("\n");
		}
		while(ingresar == 1);

		printf("\n\n");

		for(int i = 0; i < Contador;i++){
			promedio = ((DatosAlumnos[i].nota1 + DatosAlumnos[i].nota2 + DatosAlumnos[i].nota3) / 3);
			printf("NOMBRE DE ESTUDIANTE %d : %s",i+1,DatosAlumnos[i].nombre);
			printf("   PROMEDIO DE NOTAS  : %.1f",promedio);
			printf("\n");
		}

		break;

	case 'B':
	case 'b':

		Contador= 0;

		do{
			printf("INGRESE EL NOMBRE DEL COMPETIDOR %d : ",Contador+1);
			scanf("%s",DatosCompetidor[Contador].nombre);
			printf("\n INGRESE LA EDAD : ");
			scanf("%d",&DatosCompetidor[Contador].edad);
			printf("SEXO (MASCULINO - FEMENINO) : ");
			scanf("%s",DatosCompetidor[Contador].sexo);
			printf("CLUB : ");
			scanf("%s",DatosCompetidor[Contador].club);
			Contador++;

			printf("\n\n DESEA INGRESAR OTRO COMPETIDOR (1. SI) (2. NO) : ");
			scanf("%d",&ingresar);
			printf("\n");
		}
		while(ingresar == 1);

		printf("\n\n");

		for(int i = 0; i < Contador;i++){
			printf("NOMBRE DEL COMPETIDOR %d : %s",i+1,DatosCompetidor[i].nombre);
			printf("\n EDAD  : %d",DatosCompetidor[i].edad);
			printf("\n SEXO  : %s",DatosCompetidor[i].sexo);
			printf("\n CLUB  : %s",DatosCompetidor[i].club);

			if(DatosCompetidor[i].edad <= 15 ){
				printf("\n *** CATEGORIA INFANTIL *** \n\n");
			} else if (DatosCompetidor[i].edad <= 30){
				printf("\n *** CATEGORIA JOVEN *** \n\n");
			} else {
				printf("\n *** CATEGORIA MAYOR *** \n\n");
			}
		}

		break;

	case 'C':
	case 'c':

		printf("INGRESE EL NOMBRE DEL ESTUDIANTE : ");
		scanf("%s",DatosAlumnos2.nombre);
		printf("\n INGRESE LA EDAD : ");
		scanf("%d",&DatosAlumnos2.edad);
		printf("SEXO (MASCULINO - FEMENINO) : ");
		scanf("%s",DatosAlumnos2.sexo);
		printf("\n INGRESE LA NOTA1 : ");
		scanf("%f",&DatosAlumnos2.promedio_estudiante2.nota1);
		printf("\n INGRESE LA NOTA2 : ");
		scanf("%f",&DatosAlumnos2.promedio_estudiante2.nota2);
		printf("\n INGRESE LA NOTA3 : ");
		scanf("%f",&DatosAlumnos2.promedio_estudiante2.nota3);
        printf("\n\n");
		promedio = ((DatosAlumnos2.promedio_estudiante2.nota1 + DatosAlumnos2.promedio_estudiante2.nota2 + DatosAlumnos2.promedio_estudiante2.nota3) / 3);
        printf("NOMBRE DE ESTUDIANTE : %s",DatosAlumnos2.nombre);
		printf("\n EDAD : %d",DatosAlumnos2.edad);
		printf("\n SEXO : %s",DatosAlumnos2.sexo);
		printf("\n PROMEDIO : %.1f",promedio);

		break;

	case 'D':
	case 'd':

	    Contador= 0;

		do{
	    printf("INGRESE EL NOMBRE DEL ESTUDIANTE : ");
		scanf("%s",DatosAlumnosN2[Contador].nombre);
		printf("\n INGRESE LA EDAD : ");
		scanf("%d",&DatosAlumnosN2[Contador].edad);
		printf("SEXO (MASCULINO - FEMENINO) : ");
		scanf("%s",DatosAlumnosN2[Contador].sexo);
		printf("\n INGRESE LA NOTA1 : ");
		scanf("%f",&DatosAlumnosN2[Contador].promedio_estudiante2.nota1);
		printf("\n INGRESE LA NOTA2 : ");
		scanf("%f",&DatosAlumnosN2[Contador].promedio_estudiante2.nota2);
		printf("\n INGRESE LA NOTA3 : ");
		scanf("%f",&DatosAlumnosN2[Contador].promedio_estudiante2.nota3);
        printf("\n\n");


		Contador++;

			printf("\n\n DESEA INGRESAR OTRO ESTUDIANTE (1. SI) (2. NO) : ");
			scanf("%d",&ingresar);
			printf("\n");
        }
		while(ingresar == 1);

		printf("\n\n");

		for(int i = 0; i < Contador;i++){
            promedio = ((DatosAlumnosN2[i].promedio_estudiante2.nota1 + DatosAlumnosN2[i].promedio_estudiante2.nota2 + DatosAlumnosN2[i].promedio_estudiante2.nota3) / 3);
			printf("NOMBRE DEL ESTUDIANTE %d : %s",i+1,DatosAlumnosN2[i].nombre);
			printf("\n EDAD  : %d",DatosAlumnosN2[i].edad);
			printf("\n SEXO  : %s",DatosAlumnosN2[i].sexo);
			printf("\n PROMEDIO  : %.1f",promedio);

			printf("\n\n");
		}

		break;

	default:
		printf("no se reconoce su peticion, seleccione una letra valida ( (a) (b) (c) (d) ) \n");
	}


	return 0;
}

