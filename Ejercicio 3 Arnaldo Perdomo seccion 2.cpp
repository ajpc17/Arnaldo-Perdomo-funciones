#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[]="Esto es una cadena de ";
	char cad2[]="caracteres del programa";
	char cad3[30];
	
	strcpy(cad3,cad1); // esto es una funcion de los primeros caracteres
	strcat(cad3,cad2); // esto es otra funcion de los segundos caracteres 
	//estas dos funciones haran que los caracteres se puedan concatenar 
	
	cout<<cad3<<endl;
	
	getch();
	return 0;
}


