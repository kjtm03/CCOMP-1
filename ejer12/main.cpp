#include <iostream>

using namespace std;
void reversa(int arreglo[],int longitud)
    {

        int arr[longitud];
        for(int j = longitud;j>=0;j--){
            arr[longitud]+=arreglo[j];
        }
    }
int main()
{
    int arr[8]={8,7,6,5,4,3,2,1};
    reversa(arr,8);
}
