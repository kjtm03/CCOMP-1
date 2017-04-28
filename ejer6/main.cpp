#include <iostream>

using namespace std;

int main()
{
 char o; float a,b,resul;
    cout<<"Ingrese operador y operandos\n";
    cin>>o>>a>>b;
    if(o=='+')
        resul=a+b;
    else if(o=='-')
        resul=a-b;
    else if(o=='*')
        resul=a*b;
    else if(o=='/')
        resul=a/b;

    cout<<a<<o<<b<<" es: "<<resul;

    return 0;
}
