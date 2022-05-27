//obtener la edad de una persona
#include<iostream>
using namespace std;
int main(){
	//Definir variable
	//char = {char, char,char}
	string nombre;
	int FechaNacimiento, edad;
	int FechaActual = 2022;
	//mostrar = cout
	cout << "Ingrese su nombre: \n"<<endl;
	//leer = cin 
	cin >> nombre;
	cout << "Ingrese el año en que nacio: \n";
	cin >> FechaNacimiento;
	edad = FechaActual - FechaNacimiento;
	cout << "La edad de " << nombre << " es de: "<< edad << " años \n";
	return 0;
}






