#include <iostream>

using namespace std;
void cambiazo2(int *pt1, int *pt2){
    int temp=*pt1;
    *pt1=*pt2;
    *pt2=temp;
}
int main()
{
    int l,m;
    cout<<"Ingrese el valor del 1� numero: \n";
    cin>>l;
    cout<<"Ingrese el valor del 2� numero: \n";
    cin>>m;
    int *pt1=&l;
    int *pt2=&m;
    cambiazo2(pt1,pt2);
    cout<<"El valor del 1� con cambio es: "<<l<<endl;
    cout<<"El valor del 2� con cambio es: "<<m<<endl;
}
