#include <iostream>

using std::cin;
using std::cout;
using std::endl;
void Suma(int a, int b);
int main(){
  int N1, N2;
  cout<<"Introduzca el valor del primer operando"<<endl;
  cin>>N1;
  cout<<"Introduzca el valor del segundo operando"<<endl;
  cin>>N2;
  Suma(N1,N2);
}
void Suma(int a, int b){
  int c= a+b;
  cout<<"el resultado de "<<a<< " mas " <<b<< " es: "<<c<< endl;
}

