/*	3.	Hacer un programa para sacar el promedio de valores de un vector.
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Cargar(float n, float vector[]);
void Promedio(float n, float vector[]);

int main()
{
	int n;
	float vector[100];
	cout<<"Promedio de un vector"<<endl;
	cout<<"Ingrese el tamaño del vector: "<<endl;
	cin>>n;

	Cargar(n, vector);
	Promedio(n, vector);

	getch();
	return 0;
}

void Cargar(float n, float vector[])
{
	for (int i=0; i<n; i++)
	{
		cout<<"Ingrese el valor del vector["<<i<<"]= ";
		cin>>vector[i];
	}
}

void Promedio(float n, float vector[])
{
	float suma=0, Promedio_;
	for( int i=0; i<n; i++)
	{
		suma=suma+vector[i];
		Promedio_=suma/n;
	}
	cout<<"El promedio es: "<<Promedio_<<endl;
}
