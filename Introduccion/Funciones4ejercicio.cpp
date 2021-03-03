#include <iostream>
using std::cout;
using std::cin;
int Factorial(int a);
int main(){
	int N1;
	cout<<"Introduzca el valor en numero: ";
	cin>>N1;
	int fact=Factorial(N1);
	cout<<"El "<<N1<<"! es: "<<fact;
}
int Factorial(int a){
	int i=1;
	int resultado=1;
	while(i<=a){
		resultado*=i;
		i++;
	}
	return resultado;
}
