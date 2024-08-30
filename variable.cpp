# include <iostream>

using namespace std;
int main(){
    system("clear");
    // // 1. Variavble declartion (don't put the value )
    // int age;
    // float salary;
    // string name;

    // // 2. Assing value to variable 
    // age = 25;
    // salary = 1000,59;
    // name = "Kii";
    // // 3. Initialize variable (as put as the value)
    // string classname = " C++ Programming ";

    // cout << "age: " << age << endl;
    // cout << " salary: " << salary << endl;
    // cout << " name: " << name << endl;
    // cout << " classname: " << classname << endl;



    // input and Output Stream
    string name;   // camelCase(className), snake_case(class_name), PascalCase(ClassName) when we stat in OOP
    int age;
    string className;
    cout << " Enter your age: ";
    cin >> age;
    cin . ignore(); // ignore the new (\n) line character 


    cout << " Enter your name: ";
    //cin >> name;
    getline(cin, name); // get the whole line from keyboard
    
    cout << " Enter your className: ";
    cin >> className;
    
    cout << "=====| student Information |===== " << endl;
    cout << " MY name is  " << name << endl;
    cout << " I'm " << age << endl;
    cout << " MY className " << className << endl;


    return 0;
}