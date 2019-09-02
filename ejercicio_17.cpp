#include <iostream>

using namespace std;

int main(void){
int numeros[10];
int i=0;
do{
  cout<<"INGRESE EL VALOR "<<i+1<<" : ";cin>>numeros[i];
  i++;
}while(i<10);
int b=0, contador=0;
do{
  cout<<endl;
  cout<<"EL VALOR "<< b+1 <<" ES:"<<numeros[b];
  contador=contador+numeros[b];
  b++;
}
while(b<10);
cout<<endl;
cout<<"La sumatoria es: "<<contador<<endl;
cout<<"El promedio es: "<<contador/10<<endl;
return 0;
}
