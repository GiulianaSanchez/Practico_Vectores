/*	1.	Hacer un programa para sacar el máximo valor de un vector de valores ya sean 
		reales o enteros.
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Cargar(float n, float vector[]);
void Mayor(float n, float vector[]);

int main()
{
	float n, vector[100];
	cout<<"Sacar máximo valor de un vector"<<endl;
	cout<<"Ingrese el tamaño del vector: "<<endl;
	cin>>n;

	Cargar(n, vector);
	Mayor(n, vector);

	getch ();
	return 0;
}

void Cargar(float n, float vector[])
{
	for (int i=0; i<n; i++)						//Vectores empiezan de cero y <n porque el ultimo numero es n-1.
	{
		cout<<"Ingrese el valor de vector["<<i<<"] = ";		//vector [<<i<<] es donde se almacenan los valores.
		cin>>vector[i];
	}
}

void Mayor(float n, float vector[])
{
	float Mayor_=0;
	for(int i=0; i<n; i++)
	{
		if(vector[i]>Mayor_)
		{
			Mayor_=vector[i];
		}
	}
	cout<<"El valor mayor del vector es: "<<Mayor_<<endl;
}
