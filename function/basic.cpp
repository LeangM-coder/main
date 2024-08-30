#include <iostream>
using namespace std;
// 1.  Function Prototype
// void printGreeting();
// int main(){

//     system("clear");
//     // 3. Call function
//     printGreeting();
//     printGreeting();
//     printGreeting();

//     return 0;
// }   
// // 2. function Definition
// void printGreeting(){
//     cout << " Hello from funtion updated "<< endl;
// }
// 1.  Function Prototype
// type 1:function has no return value and no parameter
// void printGreeting();
// type 2:function has no return value and has parameter
// void smartGreeting(string name);

// void smartGreeting(string name){ 
//     cout << " Hello " << name << " from Hotel!" << endl;
// }
// int main(){
//     system("clear");
//     smartGreeting("Lang");
//     // can using string name = "Lang";, smatGreeting(name);
//     string name = "Kii"; // value " lang" is a argument
//     smartGreeting(name);
//     return 0;
// }

// void smartGreeting(string name, int pin);
// int main(){
//     system("clear");
    // smartGreeting("lang", 2405);
    // string name =" kii";
    // smartGreeting(name, 2404);
//     string name;
//     int pin;
    
//     cout << " Enter your name: ";
//     getline(cin, name);
//     cout << " Enter your pin: ";
//     cin >> pin;
//     smartGreeting(name, pin);


//     return 0;
// }

// void smartGreeting(string name, int pin){
//     if (pin == 2404){
//         cout << " Hello " << name << " from Hotel!"<< endl;
//     }else{
//         cout <<" You are not allowed to enter the Hotel! "<< endl;

//     }
    
// }

// Type 3. function has no return value and has paramenter
// float getBalance();

// int main(){
//     system("clear");
//     float salary = getBalance();
//     cout << " Your salary is:" << salary << endl;
//     return 0;
// }
// float getBalance(){
//     return 100 + 2000;
// }

// 4. function has return and has paramenter
float getBalance();
float calculateTax(float salary);
int main(){
    system("clear");
    float salary = getBalance();
    float paidTax = calculateTax(salary);
    cout << " Your salary is: " << salary << endl;
    cout << " You have to pay tax: " << paidTax << endl;
    return 0;

}
float calculateTax(float salary){
    float tax = 0.2;
    return salary * tax;
}
float getBalance(){
    return 100 + 2000;
} 