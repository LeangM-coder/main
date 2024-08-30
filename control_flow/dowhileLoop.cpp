#include <iostream>
using namespace std;
void displayMenu(){
    cout << " ========|Option|========="<< endl;
    cout << " 1. Login "<< endl;
    cout << " 2. register "<< endl;
    cout << " 0. Exit "<< endl;
    cout << " ================="<< endl;
    cout << " Enter your choice: ";
}
string correctPassword;
string correctUsername;
void login(){
    cout<<" ==========|login|=========="<< endl;
    string username , password;
    cout << " Enter your Username: ";
    cin >> username;
    cout << " Enter your Password: ";
    cin >> password;
    while((username !=correctUsername)|| (password != correctPassword)){
        cout<< " Invalid username or password "<< endl;
        cout << " Enter username: ";
        cin >> username;
        cout << " Enter password:";
        cin >> password;
    }
}
void registerUser(){
    cout << " ============|Register|========== "<< endl;
    cout << " Enter username: ";
    cin >> correctUsername;
    cout << " Enter password: ";
    cin >> correctPassword;
    system("clear");

}





int main(){
    system("clear");
    int option;
    // syntax: Do while loop
    // do{
        // statements
    // }while(TestExpression);
    // int count = 0;
    // do {
    //     count ++;
    //     cout << " Working in do while loop"<< endl;
    // }while (count !=4);
    do{
        displayMenu();
        cin >> option;
        system("clear");
        switch(option){
            case 1:{
                login();
                break;
            }
            case 2:{
                registerUser();
                break;
            }
            case 0:{
                cout << " Exiting......"<<endl;
                break;
            default:
                cout << " Invalid choice "<< endl;
                cout << " Please enter a valid choice "<< endl;

            }
        }
        

    }while(option !=0);
    
    return 0;
}