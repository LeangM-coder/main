#include <iostream>
using namespace std;
struct Student{
    int age;
    string name;
    string gender;
    string email;
    //
    void studentInfo(){
        cout << " Student Name: "<<name<<endl;
        cout << " Age: "<<age<<endl;
        cout << " Gender: "<< gender <<endl;
        cout << "Email: "<< email <<endl;


    }
};
enum Gender{
    MALE =0,
    FEMALE =1
};


int  main(){
    system("clear");
    Gender gender = MALE;
    cout <<Gender::FEMALE;

    Student student1;
    cout <<" Student Name: ";
    getline (cin,student1.name);
    cout << " Student Age: ";
    cin >> student1.age;
    cout << "Student Gender:  ";
    cin >> student1.gender;
    cout << " Student Email: ";
    cin >> student1.email;
    student1.studentInfo();

    //
    Student student2;
    student2.name =" Lang";
    student2.age = 19;
    student2.gender = " Male";
    student2.email =" Lang@gamil.com";
    student2.studentInfo();



    
    return 0;
}
