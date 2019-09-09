#include <iostream>
using namespace std;

int functi(int n){
	if(n==0)
	  return(0);
	  return(n + functi(n-1));
}
int main(void){
	int numero;
	cout<<"ingrese un numero: ";
	cin>>numero;
	cout<<functi(numero);
	return 0;
}
