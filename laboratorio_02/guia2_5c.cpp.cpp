#include <iostream>
using namespace std;

int functi(int n){
	int sumatoria=0;
	for(int i=1;i<=n;i++){
		sumatoria=sumatoria+i;
	}
	return sumatoria;
}
int main(void){
	int numero;
	cout<<"ingrese un numero: ";
	cin>>numero;
	cout<<functi(numero);
	return 0;
}
