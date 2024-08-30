#include <iostream>
#include <string>
using namespace std;
// class Utils{
//     public:
//         int a;
//         int b;
//         void sum(int x, int y){
//             a = x + y;
//             cout << " Sum: "<< a<<endl;
//         }
//         void mul(int t, int r){
//             b = t/r;
//             cout << " Mul: "<< b <<endl;
//         }


// };


// int main(void){
//     // directly initialize 
//     // Utils obj;
//     // obj.sum(5,7); // Call the function with arguments 5 and 7
//     // obj.mul(100,5);
//     // dynamically initialize or dynamic automatically memory allocation
//     Utils *obj = new Utils;
//     obj-> sum(5,2);
//     return 0;
// }

class Utils{

  private:
    int s;
    double a;
  public:
    void sum(int x, int y){
      s = x+y;
      cout << " Sum: "<< s <<endl;
    }
    void average(double x, double y){
      a = (x + y)/2;
      cout << " Average: "<< a <<endl;
    }
    
};
int main(){
  Utils obj;
  obj.sum(10,2);
  obj.average(34.5,7.8);
  return 0;
}



// #include<iostream>
// #include<string>

// using namespace std;

// class Person{
//     private:
//       int age;
//       string name;
//       string email;
//     public:
//       void setData(int age, string name, string email){
//         this->age = age;
//         this->name = name;
//         this->email = email;
//     }
//       void JK(){
//         cout << " Enter your age: ";
//         cin >> age;
//         cout << " Enter your name: ";
//         cin.ignore();
//         getline(cin, name);
//         cout <<" Enter your email: ";
//         cin >> email;
//     }
//         void displayData(){
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Email: " << email << endl;
//     }
// };

// int main(){
//     system("clear");
//     while(true){
//         Person person;
//         person.JK();
//         person.displayData();
//     }


//     return 0;
// }
