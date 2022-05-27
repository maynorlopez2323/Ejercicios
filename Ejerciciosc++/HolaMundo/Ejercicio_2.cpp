#include<iostream>
using namespace std;
int main (){
	//Declarando las variables 
	string nombre;
	float vSueldo;
	float vSueldoHora;
	
	//Solicitar los datos de nombre y Sueldo
	cout <<"Ingrese el nombre del empleado: "<<endl;
	cin >> nombre;
	cout <<"Ingrese el sueldo del empleado: "<<endl;
	cin >> vSueldo;
	
	//Realizar la operación matemática
	vSueldoHora = vSueldo/30/8;
	
	//Mostrar los resultados
	cout << "El sueldo de: "<<nombre <<" es de: "<<vSueldoHora <<" LPS."<<endl;
  return 0;
}
