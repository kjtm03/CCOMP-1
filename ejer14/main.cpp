#include <iostream>

using namespace std;
int sumRec(int arr[],int a, int b){
    if(a==b)
        return 0;
    else
        return arr[a]+sumRec(arr,a+1,b);
    }
int main()
{
    int arr[]={1,2,5,4};
    cout<<sumRec(arr,0,4)<<endl;
}
