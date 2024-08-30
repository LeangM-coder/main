#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    system("Clear");
    // Integer data type
    int  x = 42; // 
    cout <<" x =" << x << endl;
    cout << " Data type of x is: " << typeid(x).name()<<endl;
    cout << " Size of x is " << sizeof(x) << " bytes "<<endl;



    // Character data type 
    char y = 'A';
    cout <<" y =" << y << endl;
    cout << " Data type of y is: " << typeid(y).name()<<endl;
    cout << " Size of y is " << sizeof(y) << " bytes "<<endl;
    


    // Floating point data type // for setprecision(you can use until 8)
    float z = 3.14;
    cout <<" z =" << setprecision(8)<< z << endl;
    cout << " Data type z is: " << typeid(z).name()<<endl;
    cout << " Size of z is " << sizeof(z) << "bytes "<<endl;

    // Double floating point data type // for steprecision(you can use until 16)
    double w = 3.141592653589793238462643383279502884197;
    cout <<" w =" << setprecision(16)<< w << endl;
    cout << " Data type w is: " << typeid(w).name()<<endl; 
    cout << " Size of w is " << sizeof(w) << "bytes "<<endl;



    // Boolean data type 
    bool isHasMoney = true;
    cout <<" isHasMoney =" << isHasMoney<< endl;
    cout << " Data type isHasMoney is: " << typeid(isHasMoney).name()<<endl; 
    cout << " Size of isHasMoney is " << sizeof(isHasMoney) << " bytes "<<endl;


    // short data type
    short a = 3413;
    cout << " a =" << a << endl;
    cout << " Data type of a is: " << typeid(a).name() << endl;
    cout << "Size of a is: " << sizeof(a) << " bytes "<<endl;

    // long data type // using for 
    unsigned long long  b = 7749295292; // unsigned = size_t
    cout << " b =" << b << endl;
    cout << " Data type of b is: " << typeid(b).name() << endl;
    cout << "Size of b is: " << sizeof(b) << " bytes "<<endl;
    return 0;
}