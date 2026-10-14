#include <iostream>
using namespace std;
int main (){
	int numero,resto,inverso=0;
	
	cout<<"ingrese el numero: "; cin>>numero;
	
	if (numero>9 && numero<1000){
		resto= numero%10;
		inverso= (inverso*10)+ resto;
		numero= numero/10;
		cout<<"el inverso es: "<<inverso;
		cout<<"\nel numero es capicua";
	} else {
		cout<<"\nerror, numero fuera de rango";
	}
	return 0;
}
