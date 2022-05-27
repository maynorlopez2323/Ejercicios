#include<iostream>
using namespace std;
int main(){
	int cantidad = 0;
	float TotalPagar;
	int precio = 900;
	
	cout<<"Ingrese la cantidad de pantalones a comprar:  \n";
	cin>>cantidad;
	
	if (cantidad >0  && cantidad <5)
	{
		TotalPagar=cantidad *precio;
	}
	 else if (cantidad >=5 && cantidad <12)
	 {
		TotalPagar = cantidad *precio*0.85;
	}
	 else if (cantidad >= 12){
		TotalPagar = cantidad *precio*0.70;
	}else{
		cout << "La cantidad no puede ser negativa";
	}
	cout <<"Total a Pagar es: "<<TotalPagar<<" LPS."<<endl;
	return 0;
	}
