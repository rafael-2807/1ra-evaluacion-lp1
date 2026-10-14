#include <iostream>
using namespace std;
int main (){
	float tasa_del_euro, valor,conversion=0.0;
	
	cout<<"ingrese la taza del dia(BCV): "; cin>>tasa_del_euro;
	cout<<"\ningrese el valor monetario en euro: "; cin>>valor;
	
	conversion= tasa_del_euro * valor;
	cout<<"\n----------resultado----------\n";
	cout<<"el valor monetario es: "<<conversion;
	
	return 0;
}
