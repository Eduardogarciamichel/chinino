#include <iostream>
#include <math.h>
using namespace std;
void meniu();
float cos(float limite, float x);
float logan(float b, float lim);
double seno(double liminf,double limsup, double x);
int main()
{
	float limite,b, lim, x, log, coseno,liminf,limsup;
	int menu;
	do
	{
			meniu();
		cin>>menu;
		if(menu>3)
			cout<<"vuelve a ingresar un numero del 1 al 3 "<<endl;
		if(menu<0)
			cout<<"vuelve a ingresar un numero del 1 al 3 "<<endl;
		switch (menu)
		{
			case 1:
				{
					cout<<"ingrese el limite "<<endl;
					cin>>limite;
					cout<<"ingrese la variable x "<<endl;
					cin>>x;
					cos(limite,x);
					cout<<endl;
					cout<<endl;
			break;
				}
			case 2:
				{
					cout<<"ingrese la variable x "<<endl;
					cin>>b;
					cout<<"ingrese el limite "<<endl;
					cin>>lim;
					logan(b,lim);
					cout<<endl;
					cout<<endl;
			break;
				}
			case 3:
				{
					cout<<"ingresa inferior"<<endl;
					cin>>liminf;
					cout<<"ingresa superior "<<endl;
					cin>>limsup;
					cout<<"ingresa equis "<<endl;
					cin>>x;
					cout<<endl;
					cout<<endl;
					seno(liminf,limsup,x);
					cout<<endl;
					cout<<endl;
			break;
				}
		}
	}while(menu!=0);
	
	return 0;
}
void meniu()
{
	int menu;
		cout<<"1.- cos(x) : "<<endl;
		cout<<"2.- log(x) : "<<endl;
		cout<<"3.- sen(x) : "<<endl;
		cout<<"0.- salir:       "<<endl;
}
float logan(float b, float lim)
{
	float uan,resta,suma,multi,division,expo,fraccion;
	uan=1;
	for (int i =1; i<=lim; i++)
	{	
		resta=b-1;
		division=resta/b;
		expo=pow(division,i);
		fraccion=1/i;
		multi=fraccion*expo;
		suma+=multi;		
		cout<<"el resultado es: "<<suma<<endl;
		return suma;
	}
}
float cos(float limite,float x)
{
	float uan,facto,par,division, potencia, suma;
	uan=1;
	facto=1;
	cin>>x;
	for (int i =1; i<=limite; i++)
	{ 	
		facto*=i;
		par=i%2;
		if(par==0)
		{
			int potencia=i;
			potencia=pow(x,i);
			division=potencia/facto;
			suma+=division;
			cout<<"la base es: "<<i<<"^"<<potencia<<"/"<<facto<<" el resultado es: "<<suma<<endl;		 
		}
		suma-=uan;
	}
	return suma;
}
double seno(double liminf,double limsup, double x)
{
	double elev,facto,suma,impar,division;
	limsup-=1;
	int signo=-1;
	facto=1;
	for(int i=liminf;i<=limsup;i++)
	{
		impar=i%2;
		if(impar!=0)
		{
			elev=pow(x,i);
			facto*=i;
			division=elev/facto;
			suma+=division;
			suma*=signo;
			signo*=-1;
		}
	}
	suma+=x;
	cout<<suma<<endl;
	return suma;
}
