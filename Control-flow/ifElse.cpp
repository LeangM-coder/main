#include <iostream>

using namespace std;
int main(){
    system("clear");
    float salary ;
    cout << " Enter salary: ";
    cin >> salary;
    if(salary < 500){
        cout << " Tax: 0% "<< endl;
        cout << " Paid tax: $"<< salary*0 << endl;
    }else if ( salary < 1000){
        cout << " Tax: 10% "<< endl;
        cout << " Paid tax: $"<< salary*0.1<< endl;
    }else if (salary < 2000){
        cout << " Tax: 20%";
        cout << " Paid tax: $"<< salary*0.2<< endl;
    }else{
        cout << " Tax: 30%";
        cout << " Paid tax: $"<< salary*0.3<< endl;
    }
    return 0;
}