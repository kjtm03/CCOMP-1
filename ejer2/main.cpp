#include <iostream>

using namespace std;

int main()
{
 float c,f;
 cout << "Farenheit  ��   Celcius" <<endl;
 for(f=0;f<=300;f+=20){
    c=((f-32)*5)/9;
    cout << f << "       ��       "<<c << endl;
    }
}
