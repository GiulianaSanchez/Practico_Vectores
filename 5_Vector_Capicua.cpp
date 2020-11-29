//5.	Hacer un programa para determinar si un vector es capicúa,
//		es decir, si el vector revertido es igual al inicial, 
//		se dice que el vector es capicúa.

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Cargar(int n, int vector[]);
void Invertir(int n, int vector[], int Invertido[]);
void Capicua(int n, int vector[], int Invertido[]);

int main()
{
	int n, vector[100], Invertido[100];
	cout<<"Determinar si un vector es Capicua"<<endl;
	cout<<endl;
	cout<<"Ingrese el tamaño del vector: ";
	cin>>n;

	Cargar(n, vector);
	Invertir(n, vector, Invertido);
	Capicua(n, vector, Invertido);

	getch ();
	return 0;
}

void Cargar(int n, int vector[])
{
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese el valor de vector["<<i<<"] = ";
		cin>>vector[i];
	}
}

void Invertir(int n, int vector[], int Invertido[])
{
	for(int i=0; i<n; i++)
	{
		Invertido[i]=vector[n-1-i];			//Invierte los vectores
	}
}

void Capicua(int n, int vector[], int Invertido[])
{
	int Cap=0;
	for(int i=0; i<n; i++)
	{
		if(Invertido[i]!=vector[i])
		{
			Cap=1;
		}
	}
	if (Cap==0)
	{
		cout<<"El vector es Capicua"<<endl; 
	}
	else
	{
		cout<<"El vector no es Capicua"<<endl;
	}
}
