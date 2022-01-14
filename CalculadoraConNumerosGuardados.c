#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta es la constamte de la opcion suma*/
	const int OPCION_SUMA = 1;
	
	/*Esta es la constante de la opcion resta*/
	const int OPCION_RESTA = 2;
	
	/*Esta es la constamte de la opcion multiplicacion*/
	const int OPCION_MULTIPLICACION = 3;
	
	/*Esta es la constante de la opcion division*/
	const int OPCION_DIVISION = 4;
	
	/*Esta variable de tipo entero guarda la seleccion del usuario*/
	int seleccionUsuario;
	
	/*Esta variable de tipo entero tiene guardado el primer numero*/
	int numero1;
	
	/*Esta variable de tipo entero guarda el segundo numero*/
	int numero2;
	
	printf("Bienvenido, ingresa un numero: ");
	scanf("%i", &numero1);
	printf("Ingresa otro numero: ");
	scanf("%i", &numero2);
	printf("\n1)Sumar.");
	printf("\n2)Restar.");
	printf("\n3)Multiplicar.");
	printf("\n4)Dividir.");
	printf("\n ");
	printf("\nElige una opcion: ");
    scanf("%i", &seleccionUsuario);
	
	/*Esta variable de tipo entero realiza la suma de los numeros guardados*/
	int resultadoSuma;
	
	/*Esta variable de tipo entero realiza la resta de los numeros guardados*/
	int resultadoResta;
	
	/*Esta variable de tipo entero realiza la multiplicacion de los numeros guardados*/
	int resultadoMultiplicacion;
	
	/*Esta variable de tipo entero realiza la division de los numeros guardados*/
	int resultadoDivision;
	
	if(seleccionUsuario==OPCION_SUMA){
		resultadoSuma = numero1 + numero2;
		printf("El resultado de sumar los numeros es: %i.", resultadoSuma);
	}else if(seleccionUsuario ==OPCION_RESTA){
		resultadoResta = numero1 - numero2;
			printf("El resultado de restar los numeros es: %i.", resultadoResta);
	}else if(seleccionUsuario == OPCION_MULTIPLICACION){
		resultadoMultiplicacion = numero1 * numero2;
			printf("El resultado de multiplicar los numeros es: %i.", resultadoMultiplicacion);
	}else if(seleccionUsuario == OPCION_DIVISION){
		resultadoDivision = numero1/ numero2;
			printf("El resultado de dividir los numeros es: %i.", resultadoDivision);
	}else{
		
		printf("La opcion seleccionada no es valida.");
	}
	

	
	return 0;
}
