#include <iostream>
#include <locale.h>
#include<conio.h>
#include<string.h>

int Suma(int a, int b);
void MostrarResultado(int x);

 int main ()
{

int N1,N2,R;
setlocale(LC_CTYPE,"spanish");
system("cls");
printf("Programa que suma dos numeros.\n\n");
printf("Ingrese el primer numero: ");
scanf("%i",&N1);
printf("Ingrese el segundo numero:");
scanf("%i",&N2);
R= Suma(N1,N2);
MostrarResultado (R);

getch();
return 0;
}


int Suma(int a, int b){
	return a+b;
}
void MostrarResultado(int x){
	printf("\n El resultado de la suma es: %i",x);
	
}
