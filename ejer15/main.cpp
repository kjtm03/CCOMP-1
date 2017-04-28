#include <iostream>

using namespace std;
string palindromo(string pal)
    {
        string z;
        for(int i = pal.size()-1;i>=0;i--)
            z += pal[i];
        return z;
    }
int main()
{
    string palabra,cambio;
    cout<<"Ingrese una palabra: \n";
    cin>>palabra;
    cambio = palindromo(palabra);
    cout<<cambio<<endl;
    if (palabra==cambio)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
