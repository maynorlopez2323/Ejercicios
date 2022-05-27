#include<iostream>
using namespace std;
int main (){
	int prom;
	cout <<"Ingrese su promedio: \n";
	cin >> prom;
	if(prom>0 && prom<=35){
		cout<<"Insuficiente"<<endl;
	}else if(prom >35 && prom < 70){
		cout<<"Reprobado"<<endl;
	}else if(prom>=70 && prom <=100){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Error al ingresar promedio"<<endl;
	}
	return 0;
}
