#include<stdio.h>//Input Output
#include<math.h>

#define PI 3.1416 //Definiendo una constante

int main(){
	float area, radio; //Declarando varables de tipo flotante
	radio = 5; //Asignando el valor a variable radio
	area = PI * pow(5,2); //Asignado resultado de la operacion variable
	printf("Area\n"); //Imprimiendo Titulo
	//Imprimiendo resultado
	printf("%s%f\n\n", "Area de Circulo con radio 5:", area);
	return 0;
}

