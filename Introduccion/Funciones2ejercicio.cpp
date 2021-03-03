#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void Max(int a, int b);
int main(){
	int N1, N2;
	cout<<"Introduzca el valor del primer numero"<<endl;
	cin>>N1;
	cout<<"Introduzca el valor del segundo numero"<<endl;
	cin>>N2;
	Max(N1,N2);
}
void Max(int a, int b){
	if(a>b){
		cout<<a<<" es mayor"<<endl;
		
	}
	else if(a<b){
			cout<<b<<" es mayor"<<endl;
	}
	else
	cout<<"Error"<<endl;
}
