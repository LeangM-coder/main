#include<iostream>
#include<string>

using namespace std;

// int factorial(int a){
//     if(a==0){
//         return 1;
//     }else{
//         return a * factorial(a-1);
//     }
// }

// int main(){
//     system("clear");
//     cout<<"Factorial of 5: "<<factorial(5)<<endl;
//     return 0;
// }


// base class or 
// class Person{
//     public:
//         int id;
//         string name;
//         int age;
//         string nationality;
//         void getDetails(){
//             cout << " ID: "<< id <<endl;
//             cout << " Name: "<< name <<endl;
//             cout << " Age: "<< age <<endl;
//             cout << " Nationality: "<< nationality <<endl;
//         }

// };
// class Student : public Person{

// };
// class Teacher : public Person{

// };
// int main(){
//     Student s;
//     s.id = 1;
//     s.name= " Ying ";
//     s.age= 18;
//     s.nationality= " Khmer";
//     Teacher t;
//     t.id= 2;
//     t.name= "Ling";
//     t.age= 24;
//     t.nationality = " khmer";
//     return 0;
// }
class Engine{
    public:
        void speedUp(){
            cout<< " Speeding up..."<<endl;
        }
        void slowdown(){
            cout << " Slowing down..."<<endl;
        }
};
class Car: public Engine{
    private:
        int id;
        string brand;
        int releasedYear;
    public:
        Car(int id, string brand, int releasedYear){
            this -> id = id;
            this -> brand = brand;
            this -> releasedYear = releasedYear;
        }
    void getDetails(){
        cout << " ID: "<< id <<endl;
        cout << " Brand: "<< brand <<endl;
        cout << " ReleasedYear: "<< releasedYear <<endl;
    }

};
class Vechicle: public Engine{

};
int main(){
    Car bmw(1, " BMW", 2024);
    bmw.getDetails();
    bmw.speedUp();
    bmw.slowdown();
    Vechicle v;
    v.speedUp();
    v.slowdown();
}
