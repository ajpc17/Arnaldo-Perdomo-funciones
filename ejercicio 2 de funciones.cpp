#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>

void media(float,float,float);
int main(int argc,const char * argv[]){
	float n1, n2, n3;
	printf("Introduzca un numero: \n");
	scanf("%f",&n1);
	printf("Introduzca un numero: \n");
	scanf("%f",&n2);
	printf("Introduzca un numero: \n");
	scanf("%f",&n3);


	media(n1,n2,n3);

	getch();
	return 0;
}
void media(float n1,float n2,float n3){
	float resultado;
	resultado= (n1+n2+n3)/3;
	printf("\nLa media es: %2.0f",resultado);
}
