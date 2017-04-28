#include <iostream>

using namespace std;

int main()
{
    int x;
    while(x != -1){
        cout << "Escriba un numero: " <<endl;
        cin >> x;
        if (x%2==0){
        cout << "El numero es par"<<endl;
        }
        else{
        cout << "El numero es impar"<<endl;
        }
    }
}

