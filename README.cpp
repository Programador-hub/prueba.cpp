/*Una empresa tiene dos turnos (mañana y tarde)
 en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los 
sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno*/

#include <iostream>
#include <conio.h>
using namespace std;
class Sueldos_TM
{
private:
	int STM[4];
	int STT[4];
	int sumaM=0;
	int sumaT=0;
	void Calcula_DatosM(int sm);
	void Calcula_DatosT(int st);
	/*CODE*/

public:
	void Carga_DatosTM();
	void Carga_DatosTT();
	void Calcula_DatosTM();
	void Calcula_DatosTT();
	void Muestra_Datos();
};

void Sueldos_TM::Calcula_DatosM(int s)
{
	if(s>=100000)
	{
		cout<<"\nSueldo: "<<sumaM;
		cout<<"\nEl turno de la mañana debe pagar impuestos";
		cout<<"\n";
	}else
	{
		cout<<"\nSueldo: "<<sumaM;
		cout<<"\nEl turno de la mañana no debe pagar impuestos";
		cout<<"\n";
	}
}

void Sueldos_TM::Calcula_DatosT(int st)
{
	if(st>=100000)
	{
		cout<<"\nSueldo: "<<sumaT;
	    cout<<"\nEl turno de la tarde debe pagar impuestos";
		cout<<"\n";
	}else
	{
		cout<<"\nSueldo: "<<sumaT;
		cout<<"\nEl turno de la tarde no debe pagar impuestos";
		cout<<"\n";
	}
}

void Sueldos_TM::Carga_DatosTM()
{
	cout<<"\n\t\tTurno de la mañana"<<endl;
	for(int f=0; f<4; f++)
	{
		cout<<"Sueldo: ";
		cin>>STM[f];
	}
}

void Sueldos_TM::Carga_DatosTT()
{
	cout<<"\n\t\tTurno de la tarde"<<endl;
	for(int i=0; i<4; i++)
	{
		cout<<"Sueldo: ";
		cin>>STT[i];
	}
}

void Sueldos_TM::Calcula_DatosTM()
{
	for(int f=0; f<4; f++)
	{
		sumaM+=STM[f];
	}
	Calcula_DatosM(sumaM);
}

void Sueldos_TM::Calcula_DatosTT()
{
	for(int i=0; i<4; i++)
	{
		sumaT+=STT[i];
	}
	Calcula_DatosT(sumaT);
}

int main()
{
	Sueldos_TM STMT;
	STMT.Carga_DatosTM();
	STMT.Carga_DatosTT();
	STMT.Calcula_DatosTM();
	STMT.Calcula_DatosTT();
	cin.get();
	cin.get();
	cin.get();
	cin.get();
}
