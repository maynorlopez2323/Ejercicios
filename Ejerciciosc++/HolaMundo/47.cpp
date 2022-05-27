#include<iostream>
using namespace std;
int main (){
	float SueldoMensual, SueldoDiario,SueldoHora;
	cout<<"Ingrese su sueldo Mensual: \n";
	cin>>SueldoMensual;
	SueldoDiario = SueldoMensual/30;
	SueldoHora = SueldoMensual/160;
	cout<<"El sueldo Diario es: "<<SueldoDiario<<" LPS."<<endl;
	cout<<"El sueldo Hora es: "<<SueldoHora<<" LPS."<<endl;
  return 0;
}
