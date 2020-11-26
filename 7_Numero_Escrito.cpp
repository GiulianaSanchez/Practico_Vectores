/*	Dado un numero entero, el programa debe devolver el valor escrito literalmente
	Si se da 12 debe devolver 'Doce'. Hacer esto hasta el valor 20. El valor debe 
	estar escrito en un vector tipo string.
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
#define MAX 21

using namespace std;

void Nombre(int n, string nombre[21]);

int main()
{
	string nombre[21]; 
	nombre[0]="Cero";
	nombre[1]="Uno";
	nombre[2]="Dos";
	nombre[3]="Tres";
	nombre[4]="Cuatro";
	nombre[5]="Cinco";
	nombre[6]="Seis";
	nombre[7]="Siete";
	nombre[8]="Ocho";
	nombre[9]="Nueve";
	nombre[10]="Diez";
	nombre[11]="Once";
	nombre[12]="Doce";
	nombre[13]="Trece";
	nombre[14]="Catorce";
	nombre[15]="Quince";
	nombre[16]="Dieciseis";
	nombre[17]="Diecisiete";
	nombre[18]="Dieciocho";
	nombre[19]="Diecinueve";
	nombre[20]="Veinte";
	int n;
	cout<<"Ingrese el numero: ";
	cin>>n;

	Nombre(n, nombre);

	getch();
	return 0;
}

void Nombre(int n, string nombre[21])
{
	if((n>0)&&(n<=20))
	{
		cout<<"El numero escrito es "<<nombre[n]<<endl;
	}
	else
	{
		cout<<"Solo son numeros del 1 al 20"<<endl;
	}
}
