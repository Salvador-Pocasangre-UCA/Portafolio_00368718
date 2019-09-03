#include <iostream>
using namespace std;

struct Complejos{
	int real; 
	int imaginario;
};

Complejos sumaDeComplejos(Complejos a, Complejos b);

int main(void){
	Complejos a; 
	
	cout<<"Ingrese el valor real del complejo A: ";
	cin>>a.real;
	cout<<"Ingrese el valor imaginario del complejo A: ";
	cin>>a.imaginario;
	
	Complejos b;
	cout<<"Ingrese el valor real del complejo B: ";
	cin>>b.real;
	cout<<"Ingrese el valor Imaginario del complejo B: ";
	cin>>b.imaginario;
	
	cout<<"La suma de las partes reales de "<<a.real <<" y "<< b.real<<" es: ";
	cout<< sumaDeComplejos(a, b).real<<endl;
	
	cout<<"La suma de las partes imaginarias de "<<a.imaginario <<"j"<<" y "<< b.imaginario <<"j"<<" es: ";
	cout<< sumaDeComplejos(a, b).imaginario<<"j"<<endl;
	return 0;
}
Complejos sumaDeComplejos(Complejos a, Complejos b){
	Complejos c;
	c.real = a.real + b.real;
	c.imaginario = a.imaginario + b.imaginario;
	return c;
}
