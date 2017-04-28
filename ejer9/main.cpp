#include <iostream>

using namespace std;
int libroAlg(int arr[],int longitud){
    int t,t2;
    for(int i=0;i<longitud;i++)
        t = i;
        while(t>0&&arr[t]<arr[t-1]){
            t2 = arr[t];
            arr[t] = arr[t-1];
            arr[t-1] = t2;
            t--;
        }
}
int main()
{
   int arr[]={1,4,6,2,9,3,5};
   cout<<libroAlg(arr,7)<<endl;
}
