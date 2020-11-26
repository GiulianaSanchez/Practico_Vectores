/*	9.	Concatenar dos vectores de tamaño n y m respectivamente. 
	[a1,a2,......an;]  [b1,b2,....bm]; 
	concatenado resulta [a1,a2,......an,b1,b2,....bm] 
	con n+m elementos.
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Cargar(int n, int m, float vector1[], float vector2[]);
void Concatenar(int n, int m, float vector1[], float vector2[], float vectorfinal[]);
void Mostrar(int n, int m, float vector1[], float vector2[], float vectorfinal[]);

int main()
{
	int n, m;
	float vector1[100], vector2[100], vectorfinal[100];
	cout<<"Concatenar vectores"<<endl;
	cout<<endl;
	cout<<"Ingrese el tamaño del primer vector: ";
	cin>>n;
	cout<<"Ingrese el tamaño del segundo vector: ";
	cin>>m;
	cout<<endl;

	Cargar(n, m, vector1, vector2);
	Concatenar(n, m, vector1, vector2, vectorfinal);
	Mostrar(n, m, vector1, vector2, vectorfinal);

	getch();
	return 0;
}

void Cargar(int n, int m, float vector1[], float vector2[])
{
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese el valor del primer vector vector1["<<i<<"] = ";
		cin>>vector1[i];
	}
	cout<<endl;
	for(int i=0; i<m;i++)
	{
		cout<<"Ingrese el valor del segundo vector vector2["<<i<<"] = ";
		cin>>vector2[i];
	}
}

void Concatenar(int n, int m, float vector1[], float vector2[], float vectorfinal[])
{
	for (int i=0; i<n; i++)
	{
		vectorfinal[i]=vector1[i];
	}
	for (int i=0; i<m; i++)
	{
		vectorfinal[n+i]=vector2[i];
	}
}

void Mostrar(int n, int m, float vector1[], float vector2[], float vectorfinal[])
{
	cout<<endl;
	for(int i=0; i<n+m; i++)
	{
		cout<<"VectorTotal["<<i<<"] = "<<vectorfinal[i]<<endl;
	}
}
