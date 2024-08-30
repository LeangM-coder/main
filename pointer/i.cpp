#include<iostream>
using namespace std;
// void test(int *p){
//     *p++;
// }
void test(int &p){
    ++p;
}
int main(){
    // int a = 3;
    // int *ptr =&a;
    // cout << " The original value: \n";
    // cout << " A address: "<< ptr << endl;
    // cout << " Pointer of A: "<< *ptr<<endl;
    // cout << " The value after modified: \n";
    // *ptr = 5;
    // cout << " A address: "<< a <<endl;
    // cout << " Pointer of A: "<<*ptr<<endl;
    // dynaminc pointer
    // int a = 2;
    // double b = 4;
    
    // string freeDrink[]={"Pepsi", "Coca", " YoYo"," Tea"};
    // string *p= freeDrink;
    // cout << *p << endl;
    // p++;
    // cout << *p<<endl;
    // p--;
    // cout <<*p<<endl;
    
    // Pass by reference
    // int a = 5;
    // cout << " The value before passing: "<< a <<endl;
    // test(a);
    
    // cout << " The value after passing: "<< a << endl;



    return 0;
}
