#include <iostream>
using namespace std;
// int main(){
//     system("clear");
//     // cout << "===============| Voting System |=============="<< endl;
//     // int age;
//     // cout <<" Enter your age: ";
//     // cin >> age;
//     // if(age>=18){
//     //     cout << " You can vote "<< endl;
//     // }else{
//     //     cout<< " You can not vote "<< "You need "<<18-age<<" year old for vote"<< endl;
//     // }
//     int age;
//     string nationality;
//     string sex;
//     string situation;
//     cout<<" Enter your age: ";
//     cin>>age;
//     cout << " Enter your nationality: ";
//     cin >> nationality;
//     cout << " Enter your sex: ";
//     cin >> sex;
//     cout << " Enter your situation: ";
//     cin >> situation;
//     bool conditional_1 = age >=18;
//     bool conditional_2 = "Khmer " && " KHMER";
//     bool conditional_3 = " Male";
//     bool conditional_4 = "Single";
    
//     if(conditional_1 && conditional_2 && conditional_3 && conditional_4){
//         cout <<" You can study English free unlimited "<< endl;

//     }else{
//         cout << " You cannot study English free ";
//     }
//     return 0;
// }



void Menu(){
    cout <<" =============| MENU |============="<< endl;
    cout << "1. Type khmer "<< endl;
    cout << "2. Type thailand "<< endl;
    cout << "3. Type itarly"<< endl;
    cout << "0. Exit "<< endl;
}

int main(){
    system("clear");
    while(true){
        Menu();
        int choice;
        cout << " Enter the choice: ";
        cin >> choice ;
        // system("clear");
        switch(choice){
            case 1:{
                string food;
                cout << " Enter your food: ";
                cin >> food;
                break;
            }
            case 2:{
                string food;
                cout << " Enter your food: ";
                cin >> food;
                break;
            }
            case 3:{
                string food;
                cout << " Enter your food: ";
                cin >> food;
                break;
            }
            case 0:{
                cout << " Exiting......."<<endl;
                break;
            }
            default:
                cout << " Invalid choice "<< endl;
                cout << " Please choose the option again"<< endl;
        }        
    }
    return 0;

}
