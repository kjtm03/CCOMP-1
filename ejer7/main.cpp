#include <iostream>

using namespace std;
  void cambiazo(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
  }
int main()
{
    int x,y;
    cout<<"Ingrese el valor del 1� numero: \n";
    cin>>x;
    cout<<"Ingrese el valor del 2� numero: \n";
    cin>>y;
    cambiazo(x,y);
    cout<<"El valor del 1� con cambio es: "<<x<<endl;
    cout<<"El valor del 2� con cambio es: "<<y<<endl;
}

