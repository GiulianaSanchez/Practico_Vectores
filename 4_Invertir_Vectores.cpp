/*	4.	Hacer un programa para revertir la lista de valores de un vector, 
		en otro vector, es decir se debe mantener el vector original.
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Cargar(int n, float vector[]);
void Invertir(int n, float vector[], float vectorInter[]);

int main()
{
	int n;
	float vector[100], vectorInter[100];
	cout<<"Invertir lista de valores de un vector."<<endl;
	cout<<"Ingrese el tamaño del vector: ";
	cin>>n;
	cout<<endl;
	
	Cargar(n, vector);
	Invertir(n, vector, vectorInter);

	getch();
	return 0;
}

void Cargar(int n, float vector[])
{
	for(int i=0; i<n; i++)	//El vector empieza de 0.
	{
		cout<<"Ingrese el valor del vector["<<i<<"] = ";
		cin>>vector[i];
	}
}

void Invertir(int n, float vector[], float vectorInter[])
{
	for(int i=0; i<n; i++)
	{
		vectorInter[i]=vector[n-1-i];	//Invierte los vectores.
		cout<<endl;
		cout<<"vector["<<i<<"] = "<<vectorInter[i];
	}
}
