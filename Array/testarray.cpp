#include <iostream>
using namespace std;
int main(){
    system("clear");
    int test[2][4];
    for(int i = 0;i <2; ++i){
        for (int j = 0; j <4; ++j){
            for (int k =0; k <3; ++k){
                cout << "Test["<< i << "]["<< j << "] << ["<< k << "]= "<< test[i][j] <<endl;
            }
        }
    }
    return 0;
}