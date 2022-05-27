#include<iostream>
using namespace std;
int main (){
	float num1, num2;
	int opcion;
	float resultado;
	cout <<"ingrese el primer numero: \n";
	cin >> num1;
	cout <<"ingrese el segundo numero: \n";
	cin >> num2;
	cout <<"Operaciones matem\xa0ticas";
	cout <<"\n 1.- Suma";
	cout <<"\n 2.- Resta";
	cout <<"\n 3.- Multiplicacion";
	cout <<"\n 4.- Division \n";
	cin >> opcion;
	switch (opcion){
		case 1:
		//Realizar la operación suma
		resultado = num1+ num2;
		cout <<"La suma de los numeros es: "<<resultado<<endl;
		break;
		case 3:
		//Realizar la operación suma
		resultado = num1* num2;
		cout <<"La multiplicación de los numeros es: "<<resultado<<endl;
		break;
	}
  return 0;
}
