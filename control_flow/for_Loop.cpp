#include <iostream>
using namespace std;
// void sorryMassage(){
//     cout << " susu "<< endl;

// }
// void printGreeting(){
//     cout << " I'm here. pro "<< endl;

// }
int sumSeries(int n){
    int sum = 0;
    for (int i = 1; i <=n ; i++){
        sum +=1;
    }
    return 0;
}
int factorial(int n){
    // int number = n;
    cout <<n << "! =";
    int fact = 1;
    for (int i = n; i >=1 ; i--){
        fact *=i;
        cout << i << " ";
        if (i == 1){
            cout <<" ";
        }else{
            cout << "*";
        }
       

    }
    cout << "= "<< fact<< endl;
    return 0;
}



int main(){
    system("clear");
    // for (int i = 0; i <100 ; i+=10){
    //     cout << i<< endl;
    //     // sorryMassage();
    //     // printGreeting();
    // }
    
    factorial(5);

   
   
   
    // cout << " sumSeries(100)"<< endl;

    
    return 0;
}
