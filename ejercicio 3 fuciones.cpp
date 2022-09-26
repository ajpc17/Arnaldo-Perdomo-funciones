#include<stdio.h>
#include<conio.h>
#include<string.h>



int main(){
	char cad1[]="Esto es una cadena de ";
	char cad2[]="caracteres del programa";
	char cad3[30];

	strcpy(cad3,cad1); // esto es una funcion de los primeros caracteres
	strcat(cad3,cad2); // esto es otra funcion de los segundos caracteres 
	//estas dos funciones haran que los caracteres se puedan concatenar 

	printf("\n %s",cad3);

	getch();
	return 0;
}

