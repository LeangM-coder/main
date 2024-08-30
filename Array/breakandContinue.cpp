#include <iostream>
using namespace std;
int main(){
    system("clear");
    for (int i= 0; i < 100; i++){
        if (i%2 !=0){
            continue; // skip the current iteration
        }
        cout << i << " ";
    }
    return 0;

}
