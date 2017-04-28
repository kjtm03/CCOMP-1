#include <iostream>

using namespace std;
int matrices()
    {
        int aMatriz[3][2] = {{2, 3}, {3, 5}, {2, 1}};
        int bMatriz[2][3] = {{2, 3, 5}, {9, 8, 7}};
        int cMatriz[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<2;k++){
                    cMatriz[i][j] += aMatriz[i][k]*bMatriz[k][j];
                }
                cout<<cMatriz[i][j]<<"  º  ";
            }
            cout<<" \n";
        }
    }
int main()
{
    matrices();
}
