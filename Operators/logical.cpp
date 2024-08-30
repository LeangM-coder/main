#include <iostream>
using namespace std;
int main(){
    system("clear");
    int age;
    string nationality;
    cout <<" Enter your age: "<<endl;
    cin>>age;
    cout<<"Enter your nationality "<<endl;
    cin>>nationality;
    bool condition1 = (age >=18);
    bool condition2= !(nationality=="khmer" || nationality=="KHMER");

    // use logical operator
    if(condition1 && condition2 ){
        cout<<"you can drive"<<endl;

    }else{
        cout<<" you can not drive"<< endl;
    }


    return 0;
}
