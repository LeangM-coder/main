#include <iostream>
using namespace std;
class Utils{
    private:
        int sum;
        int  square;
        double khCurrencyExchange;
    public:
        void sumData(int a, int b){
            sum = a + b;
            cout << " Total: "<< sum <<endl;
        }
        void squareData(int x){
            square = x*x;
            cout << " Powering number: "<< square << endl;
        }
        void khCurrencyExchangeData(double x){
            khCurrencyExchange = x/4000;
            cout << " khCurrencyExchange: "<< khCurrencyExchange << endl;
        }
};
int main(){
    Utils u1;
    u1.sumData();
    u1.squareData();
    u1.khCurrencyExchangeData();

    return 0;
}

class Pet{
    private:
        int id;
        string name;
        string color;
        string type;
    public:
        Pet(int id , string name, string color, string type ):id(id),name(name),color(color),type(type){}
        void petDate(){
            cout << " ID: "<< id << endl;
            cout << " name: "<< name << endl;
            cout << " color: "<< color << endl;
            cout << " type: "<< type << endl;
        }
        Pet();
};
int main(){
    Pet p1;
    p1.petData();
    return 0;
}