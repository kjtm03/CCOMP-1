#include <iostream>

using namespace std;
int pot(int base, int exponente)
    {
    int x = 0;
    x+=1;
    int resul=1;
    for(int i=0;i<exponente;i++)
    {
        resul=resul*base;
        }
    return resul;
    }
int main()
{
    cout<<"La potencia es: "<<pot(2,6)<<endl;
}
