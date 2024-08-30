#include <iostream>
using namespace std;
void menu(){
    cout <<" =======|Menu|======="<< endl;
    cout << "1.Add "<< endl;

    cout << "2.subtract"<< endl;
    cout << "3. Multiply "<< endl;
    cout << "0. exit"<<endl;
}
double add(double a ,double b){
    return a+b;
}
double subtract(double a ,double b){
    return a-b;
}
double multiply(double a ,double b){
    return a*b;
}



int main(){
    system("clear");
    // syntac while loop
    // while(testExpression){
    //     code block
    // }
    

    // int count = 0;
    // while(count !=10){
    //     count++;
    //     cout<< count << " ";

    // }
    while(true){
        menu();
        int choice;
        cout << " Enter your choice: ";
        cin >> choice;
        system("clear");
        switch(choice){
        case 1:{
            double a, b;
            cout <<"Enter two numbers:";
            cin >> a >> b ;
            cout<< " sum: "<< add(a, b)<< endl;
            break;
        }
        case 2:{
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b ;
            cout<< " sum: "<< subtract(a, b)<< endl;
            
            break;
        }
        case 3:{
            double a, b;
           cout <<"Enter two numbers:";
            cin >> a >> b ;
            cout<< " sum: "<< multiply(a, b)<< endl;
            break;
        }
        case 0:
            cout << "exiting..."<< endl;
        default:
        cout << " Invaild choice "<<endl;
        cout << " Please enter a vaild choice"<< endl;
    }
    if(choice == 0){
            break;
        }
    }
    return 0;
}