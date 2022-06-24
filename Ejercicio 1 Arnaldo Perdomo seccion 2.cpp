#include <iostream>
#include <locale.h>
#include<conio.h>
#include<string.h>

using namespace std; 

int Suma(int a, int b);
void MostrarResultado(int x);

 int main ()
{

int N1,N2,R;
setlocale(LC_CTYPE,"spanish");
system("cls");
cout<<"Programa que suma dos numeros.\n\n";
cout<<"Ingrese el primer numero: ";
cin>>N1;
cout<<"Ingrese el segundo numero:";
cin>>N2;
R= Suma(N1,N2);
MostrarResultado (R);

getch();
return 0;
}


int Suma(int a, int b){
	return a+b;
}
void MostrarResultado(int x){
	cout<<"\n El resultado de la suma es: "<<x;
	
}
