/*	Proyecto Final
*/

#include "stdafx.h"
#include<iostream>
#include <string>
#define M 100

using namespace std;

void caso1();
void caso2();

int main(){
	//switch para hacer el menu con las fotos. Para escoger el caso
	caso1();
	caso2();
}
void caso1()
{
	float opc[M],val[M]={0,0,0,0,0,0,0};

	//opc[M] almacena los valores 1 y 0 que funcionan como valores de verdad para saber si el dato es dado o no y 
	//val[M] alamcena los valores reales de las variables 
	string nombres[] ={"Tension","Peso1","Peso 2","Masa 1","Masa 2","Aceleracion","Gravedad"};
	cout<<"Para este tipo de problema las variables con las que se podria trabajar son: "<<endl;
	cout<<"1.Tension"<<endl;
	cout<<"2.Peso 1"<<endl;
	cout<<"3.Peso 2"<<endl;
	cout<<"4.Masa 1"<<endl;
	cout<<"5.Masa 2"<<endl;
	cout<<"6.Aceleracion"<<endl;
	cout<<"7.Gravedad"<<endl;
	cout<<endl;
	cout<<"Ingrese 1 si el dato es dado en el enunciado: "<<endl;
	cout<<"Ingrese 0 si el dato no es dado en el enunciado: "<<endl<<endl;
	
	for(int i=0;i<7;i++)
	{
	//Almacenar valores de verdad 0 o 1	
		do
		{
			cout<<i+1<<". "<<nombres[i]<<" : " ;
			cin>>opc[i];	
		}
		while((opc[i]!=0)&&(opc[i]!=1));
	}
	
	//Almacenar valores numericos de las variables
	for(int i=0;i<7;i++)
	{
		if(opc[i]==1)
		{
			cout<<"Ingrese el valor de "<<nombres[i]<<": ";
			cin>>val[i];	
		}
	}
	
	//Declarar todas las formulas: //
	//............................................formulas.......................................................//
	
	while((val[0]==0)||(val[1]==0)||(val[2]==0)||(val[3]==0)||(val[4]==0)||(val[5]==0)||(val[6]==0))
	{
	//Formula Para aceleracion
		if((val[5]==0)&&(val[6]!=0)&&(val[4]!=0)&&(val[3]!=0))
		{
			val[5]=(val[6])*((val[4]-val[3])/(val[3]+val[4]));
		}
	//Formula para tension
		if((val[0]==0)&&(val[3]!=0)&&(val[5]!=0)&&(val[6]!=0))
		{
			val[0]=(val[3]*(val[5]+val[6]));
	//cout<<val[5]<<"Lokita2"<<endl;	
		}
	//Formula para gravedad
		if((val[6]==0)&&(val[5]!=0)&&(val[4]!=0)&&(val[3]!=0))
		{
			val[6]=(val[5])*(val[3]+val[4])/(val[4]-val[3]);	
		}
		if((val[6]==0)&&(val[1]!=0)&&(val[3]!=0))
		{
			val[6]=(val[1])/(val[3]);	
		}
		if((val[6]==0)&&(val[2]!=0)&&(val[4]!=0))
		{
			val[6]=(val[2])/(val[4]);	
		}
	//Formula para masa1
		if((val[3]==0)&&(val[0]!=0)&&(val[5]!=0)&&(val[6]!=0))
		{
			val[3]=(val[0]/(val[5]+ val[6]));	
		}
	
		if((val[3]==0)&&(val[1]!=0)&&(val[6]!=0))
		{
			val[3]=(val[1]/val[6]);	
		}
	
	//Formula para masa2
		if((val[4]==0)&&(val[0]!=0)&&(val[6]!=0)&&(val[5]!=0))
		{
			val[4]=(val[0]/(val[6]-val[5]));	
		}
	
		if((val[4]==0)&&(val[2]!=0)&&(val[6]!=0))
		{
			val[4]=(val[2]/val[6]);	
		}
	
	//Formula para Peso1
		if((val[1]==0)&&(val[3]!=0)&&(val[6]!=0))
		{
			val[1]=val[3]*val[6];	
		}
	
	//Formula para Peso2
		if((val[2]==0)&&(val[4]!=0)&&(val[6]!=0))
		{
			val[2]=val[4]*val[6];	
		}
	//----------Muestra Respuestas--------//
	for(int i=0;i<7;i++)
	{
		if(opc[i]==0)
		{
			cout<<"El valor de "<<nombres[i]<<" es: ";
			cout<<val[i]<<endl;	
		}
	}
}
}

void caso2()
{
	float opc[M], val[M]={0, 0, 0, 0, 0, 0, 0, 0};
	//opc[M] almacena los valores 1 y 0 (para saber si entran o no).
	//val[M] almacena los valores numericos.
	string nombres []={"Tensión 1","Tensión 2", "Masa 1", "Masa2", "Peso 1", "Peso 2", "Aceleración 1", "Aceleración 2", "Gravedad"};

    cout<<"Para este tipo de problema las variables con las que podri trabajar son: "<<endl;
    cout<<"1. Tensión 1"<<endl;
    cout<<"2. Tension 2"<<endl;
    cout<<"3. Masa 1"<<endl;
    cout<<"4. Masa 2"<<endl;
    cout<<"5. Peso 1"<<endl;
    cout<<"6. Peso 2"<<endl;
    cout<<"7. Aceleración 1"<<endl;
	cout<<"8. Aceleración 2"<<endl;
    cout<<"9. Gravedad"<<endl;
    cout<<endl;
    cout<<"Ingrese 1 si el dato es dado en el enunciado: "<<endl;
	cout<<"Ingrese 0 si el dato no es dado en el enunciado: "<<endl<<endl;
    
    for(int i=0;i<9;i++)
	{
	//Almacenar valores de verdad 0 o 1	
		do
		{
			cout<<i+1<<". "<<nombres[i]<<" : " ;
			cin>>opc[i];	
		}
		while((opc[i]!=0)&&(opc[i]!=1));
	}
	
	//Almacenar valores numericos de las variables
	for(int i=0;i<9;i++)
	{
		if(opc[i]==1)
		{
			cout<<"Ingrese el valor de "<<nombres[i]<<": ";
			cin>>val[i];	
		}
	}

	//Declaración de Fórmulas

	//	T1=2*T2;
	//	a2=2*a1;

	//............................................formulas.......................................................//

	while((val[0]==0)||(val[1]==0)||(val[2]==0)||(val[3]==0)||(val[4]==0)||(val[5]==0)||(val[6]==0)||(val[7]==0)||(val[8]==0))
	{
	//Formula para Tensión 1
		if((val[0]==0)&&(val[1]!=0))
		{
			val[0]=2*val[1];			//T1=2T2
		}
	//Formula para Tensión 2
		if ((val[1]==0)&&(val[2]!=0)&&(val[6]!=0)&&(val[8]!=0))
		{
			val[1]=(val[2]*val[6]+val[2]*val[8])/2;		//T2=(m1*a1+m1*g)/2
		}
	//Formula para Masa 1
		if ((val[2]==0)&&(val[1]!=0)&&(val[4]!=0)&&(val[8]!=0)&&(val[6]!=0))
		{
			val[2]=(2*val[1]-val[4]*val[8])/val[6];		//m1=(2*T2-P1)/a1
		}

		if ((val[2]==0)&&(val[4]!=0)&&(val[8]!=0))
		{
			val[2]=val[4]/val[8];		//m1=P1/g
		}
	//Formula para Masa 2
		if ((val[3]==0)&&(val[5]!=0)&&(val[1]!=0)&&(val[6]!=0))
		{
			val[3]=(val[5]-val[1])/2*val[6];	//m2=(P2-T2)/2*a1
		}
		if ((val[3]==0)&&(val[5]!=0)&&(val[8]!=0))
		{
			val[3]=val[5]/val[8];		//m2=P2/g
		}
	//Formula para Peso 1
		if ((val[4]==0)&&(val[2]!=0)&&(val[8]!=0))
		{
			val[4]=val[2]*val[8];		//P1=m1*g
		}
	//Formula para Peso 2
		if ((val[5]==0)&&(val[3]!=0)&&(val[8]!=0))
		{
			val[5]=val[3]*val[8];		//P2=m2*g
		}
	//Formula para Aceleración 1
		if ((val[6]==0)&&(val[1]!=0)&&(val[2]!=0)&&(val[8]!=0))
		{
			val[6]=(2*val[1]-val[2]*val[8])/val[2];	//a1=(2*T1-m1*g)/m1
		}
		if ((val[6]==0)&&(val[3]!=0)&&(val[8]!=0)&&(val[1]!=0))
		{
			val[6]=(val[3]*val[8]-val[1])/2*val[3];		//a1=(m2*g-T2)/2*m2
		}
	//Formula para Aceleración 2
		if ((val[7]==0)&&(val[6]!=0))
		{
			val[7]=2*val[6];			//a2=2*a1
		}
	//Formula para Gravedad
		if ((val[8]==0)&&(val[2]!=0)&&(val[6]!=0)&&(val[1]!=0))
		{
			val[8]=(-1*val[2]*val[6]+2*val[1])/val[2];	//g=(-m1*a1+2*T2)/m1
		}
		if ((val[8]==0)&&(val[3]!=0)&&(val[6]!=0)&&(val[1]!=0))
		{
			val[8]=(val[3]*2*val[6]+val[1])/val[3];		//g=(m2*2*a1+T2)/m2
		}
		if ((val[8]==0)&&(val[4]!=0)&&(val[2]!=0))
		{
			val[8]=val[4]/val[2];		//g=P1/m1
		}
		if ((val[8]==0)&&(val[5]!=0)&&(val[3]!=0))
		{
			val[8]=val[5]/val[3];		//g=P2/m2
		}

	//----------Muestra Respuestas--------//
	for(int i=0;i<9;i++)
	{
		if(opc[i]==0)
		{
			cout<<"El valor de "<<nombres[i]<<" es: ";
			cout<<val[i]<<endl;	
		}
	}
}
}
