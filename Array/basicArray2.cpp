#include <iostream>
using namespace std;
int main (){
    system("clear");
    float marks[5];
    marks[0] = 90.5;
    marks[1] = 80.5;
    marks[2] = 70.5;
    marks[3] = 60.5;
    marks[4] = 50.5;
    cout << " Size of marks array: "<< sizeof(marks)<< endl;
    cout << " Address of marks array: "<< marks << endl;
    cout << " Address of mark[0]: "<< &marks[0]<<endl; 
    cout << " Address of mark[1]: "<< &marks[1]<<endl;   
    cout << " Address of mark[2]: "<< &marks[2]<<endl;   
    cout << " Address of mark[3]: "<< &marks[3]<<endl;   
    cout << " Address of mark[4]: "<< &marks[4]<<endl;   
    // access 2nd element of the array by using + operater
    cout << " 2nd element of the array: "<< *(marks +2)<<endl;
    // access 4th element of the array by using + operater
    cout << " 4th element of the array: "<< *(marks +4)<<endl; 
    cout << " 5th element of the array: "<< *(marks +5)<<endl;
    cout << " 6th element of the array: "<< *(marks +6)<<endl;
    cout << " 7th element of the array: "<< *(marks +7)<<endl;
    cout << " 8th element of the array: "<< *(marks +8)<<endl;
       
    return 0;
}