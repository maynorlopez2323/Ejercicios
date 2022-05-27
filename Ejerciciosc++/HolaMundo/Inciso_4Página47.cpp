/*
Crear un programa que solicite como dato
de entrada cuatro numeros, y devuelva
como resultado el producto
de los dos primeros y la suma de los dos 
últimos.
*/
#include<iostream>
using namespace std;
int main (){
	//Declaraciones de variables
	int num1,num2,num3,num4;
	int multi, suma;
	
	//Solicitar los numeros
	cout << "Ingrese el primer numero: \n";
	cin >> num1;
	cout << "Ingrese el segundo numero: \n";
	cin >> num2;
	cout << "Ingrese el tercer numero: \n";
	cin >> num3;
	cout << "Ingrese el cuarto numero: \n";
	cin >> num4;
	
	//Operacion matemática
	multi = num1*num2;
	suma = num3+num4;
	
	//Mostrar resultados
	cout << "La multiplicacion de "<<num1 << " y "<<num2 << " es: "<< multi <<endl;
	cout << "La suma de "<<num3 << " y "<<num4 << " es: "<< suma <<endl;
  return 0;
}





