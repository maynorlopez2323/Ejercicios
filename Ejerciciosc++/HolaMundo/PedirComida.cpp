#include<iostream>
using namespace std;
int main (){
	/*
	Realizar un programa que me permita 
	solicitar una orden de comida
	en el cual pida:
	nombre:
	comida:
	bebida:
	precio de comida:
	precio de bebida:
	cuanto porcentaje de propina:
	y mostrar el total:
	*/
	//declarar las variables
	string nombre, bebida, comida;
	double Precio_Comida, Precio_Bebida, Propina, TotalPagar;
	
	//Solicitar los datos
	cout << " Ingrese su nombre: \n";
	cin >> nombre;
	
	cout <<"Ingrese su orden de comida: \n";
	cin >> comida;
	
	cout <<"Ingrese el sabor de su bebida: \n";
	cin >> bebida;
	
	cout <<"Ingrese el precio de su comida: \n";
	cin >> Precio_Comida;
	
	cout <<"Ingrese el precio de su bebida: \n";
	cin >> Precio_Bebida;
	
	cout << "Ingrese el porcentaje de propina que desea agregar: \n";
	cin >> Propina;
	
	//Procedimiento
	TotalPagar = Precio_Comida + Precio_Bebida + Propina*(Precio_Comida + Precio_Bebida);
	
	//Mensaje de Salida
	cout << "Bienvenido "<<nombre <<", su orden de "<<comida<<" y su bebida "<<bebida<<" suman con la propina un total de :"<<TotalPagar <<" LPS."<<endl;
	
  return 0;
}






