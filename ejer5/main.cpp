#include <iostream>

using namespace std;

int main()
{
int x;
while(x!=-1)
    {
    cout << "Escriba un numero " <<endl;
    cin >> x;
    switch(x)
        {
        case 0:
            cout<<"Cero"<<endl;
            break;
        case 1:
            cout<<"Uno"<<endl;
            break;
        case 2:
            cout<<"Dos"<<endl;
            break;
        case 3:
            cout<<"Tres"<<endl;
            break;
        case 4:
            cout<<"Cuatro"<<endl;
            break;
        case 5:
            cout<<"Cinco"<<endl;
            break;
        case 6:
            cout<<"Seis"<<endl;
            break;
        case 7:
            cout<<"Siete"<<endl;
            break;
        case 8:
            cout<<"Ocho"<<endl;
            break;
        case 9:
            cout <<"Nueve"<<endl;
            break;
        default:
            if (x==-1)
                cout<<"Programa terminado"<<endl;
            else
                cout <<"Numero NO permitido"<<endl;
        }
    }
}
