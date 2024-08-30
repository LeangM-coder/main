#include <iostream>
using namespace std;
int main(){
    int n[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{3,5,7,8}};
    int k[5][2]={{1,2},{3,4},{5,6},{7,8},{9}};// jaee array
    n[0][0]=100;
    cout << " Array 2D\n";
    for (int i=0; i<sizeof(n)/sizeof(n[0]);i++){
        for (int j =0; j<sizeof(n[0])/sizeof(n[0][0]); j++){
            cout << n[i][j]<< " ";

        }
        cout << endl;
    }

    return 0;
}