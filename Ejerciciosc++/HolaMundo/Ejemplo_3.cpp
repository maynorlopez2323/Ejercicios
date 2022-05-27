#include<iostream>
using namespace std;
int main (){
	// variables
	float vSalario, vihss, vRap, vCooperativa;
	float vDeducciones, vSueldoNeto;
	
	//Solicitar datos
	cout <<"Ingrese el sueldo : \n";
	cin >> vSalario;
	
	//Realizar el calculo de IHSS
	
	if(vSalario <= 9326){
		vihss = vSalario*0.05;
	}
	
	//Realizar las operaciones
	vRap = vSalario*0.015;
	vCooperativa = vSalario*0.05;
	vDeducciones = vihss+vRap+vCooperativa;
	vSueldoNeto = vSalario - vDeducciones;
	
	cout <<"Se paga de IHSS: "<<vihss<<endl;
	cout <<"Se paga de RAP: "<<vRap<<endl;
	cout <<"Se paga de Cooperativa: "<<vCooperativa<<endl;
	cout <<"Sueldo a pagar: "<<vSueldoNeto<<endl;
	
  return 0;
}
