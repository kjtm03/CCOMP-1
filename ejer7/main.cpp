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
    cout<<"Ingrese el valor del 1º numero: \n";
    cin>>x;
    cout<<"Ingrese el valor del 2º numero: \n";
    cin>>y;
    cambiazo(x,y);
    cout<<"El valor del 1º con cambio es: "<<x<<endl;
    cout<<"El valor del 2º con cambio es: "<<y<<endl;
}

