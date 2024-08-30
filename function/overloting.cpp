#include <iostream>
using namespace std;
void dev(int x, int y){
    int dev = x * y;
    cout << " dev: "<< dev<< endl;
}
void dev(double x, double y){
    double dev = x+ y;
    cout <<" dev: "<< dev <<endl;
}
void mul(int x, int y){
    double mul = x / y;
    cout << " mul: "<<mul<< endl;
}
void mul(double x, double y){
    double mul = x/y;
    cout <<" mul: "<< mul <<endl;
}

int main(){
    system("clear");
    dev(20,4);
    dev(26.5,5.8);
    mul(20,5);
    mul(30.5,5.9);
    return 0;
}