#include <iostream>
using namespace std;
int main(){
system("clear");
bool isSecurityallow = true;
bool isGetTicket = true;
bool isGetTurn = false;

if (isSecurityallow){
    cout << " You can enter the bank! "<< endl;
    if(isGetTicket){
        cout << " You can wait for your turn! "<< endl;
        if (isGetTurn){
            cout <<" You can meet the casheir! "<< endl;
        }else{
            cout << " Please wait for your turn! "<< endl;
        }
    }
    else{
        cout << " Please get the ticket first! "<< endl;
} }else {
        cout << " You can't enter the bank! "<< endl;
    }


return 0;
}