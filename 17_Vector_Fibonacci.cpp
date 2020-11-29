//17.	Generar los primeros n números de Fibonacci en un vector.

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void Fibonacci(int n, int vect[]);

int main()
{
	int n, vect[100];
	cout<<"Numeros de Fibonacci"<<endl;
	cout<<endl;
	cout<<"Ingrese los n  numeros que desea generar"<<endl;
	cin>>n;

	vect[0]= 0;
	vect[1]=1;

	Fibonacci(n, vect);


	getch ();
	return 0;
}

void Fibonacci(int n, int vect[])
{
	cout<<"La Serie Fibonacci es: "<<endl;
	cout<<vect[0]<<endl;
	cout<<vect[1]<<endl;

	for(int i=2; i<=n; i++)
	{
		vect[i]=vect[i-1]+vect[i-2];
		cout<<vect[i]<<endl;
	}
}
