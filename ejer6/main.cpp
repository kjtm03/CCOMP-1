#include <iostream>

using namespace std;

int main()
{
    string a;
    int b,c;
    cout<<"Escribe la operacion: \n";
    cin>>a;
    cout<<"Escribe el primer numero: \n";
    cin>>b;
    cout<<"Escribe el segundo numero: \n";
    cin>>c;
    if (a=="/")
        {
            cout<<"La division es: "<<b/c<<endl;
        }
    if (a=="*")
        {
            cout<<"La multiplicacion es: "<<b*c<<endl;
        }
    if (a=="-")
        {
            cout<<"La resta es: "<<b-c<<endl;
        }
    if (a=="+")
        {
            cout<<"La suma es: "<<b+c<<endl;
        }
}
