#include <iostream>
#include <cmath>
using namespace std;

int InvertirNumero(int num, int pos);

int main(void){
	int numero=0;
	cout<<"Ingrese el numero que desea invertir: ";
	cin>>numero;
	int numCifras= numero ? static_cast<int>(log10(abs(numero))) + 1 : 1;
	cout<<endl;
	cout<<"EL NUMERO INVERTIDO ES..."<<endl;
	if(numero%10==0){
		if(numero >=10 && numero < 100){
			cout<<"0"<<InvertirNumero(numero, numCifras-1);
		}
		else if(numero >=100 && numero < 1000){
			cout<<"00"<<InvertirNumero(numero, numCifras-1);
		}else if(numero >=1000 && numero < 10000){
			cout<<"00"<<InvertirNumero(numero, numCifras-1);
		}
	}else{
	cout<<InvertirNumero(numero, numCifras-1);
}
}

int InvertirNumero(int num, int pos){
 
    if (num < 10) {
        return num;
    } else {
        return num%10 * (int) pow(10, pos) + InvertirNumero(num/10, pos-1);
    }
 
}
