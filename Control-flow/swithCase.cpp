#include <iostream>
using namespace std;
// void menu(){
//     cout << " =========| Pizza Menu |=========="<< endl;
//     cout << " 1. Buy Pizza "<< endl;
//     cout << " 2. Buy Drink "<< endl;
//     cout << " 3. Buy Pizza and Drink"<< endl;
//     cout << " 0. Exit "<< endl;
// }
// int main(){
//     system("clear");
//     menu();
//     cout << " Enter option ";
//     int option;
//     cin >> option;

//     switch(option){
//         case 1:{
//             cout << " You bought a Pizza "<< endl;
//             break;
//         }
//         case 2:{
//             cout << " You bought a Drink "<< endl;
//             break;
//         }
//         case 3:{
//             cout << " You bought Pizza and Drink "<< endl;
//             break;
//         }case 0:{
//             cout << " goodBye "<<endl;
//             break;
//         }
//         default:{
//         cout << " Invalid option! "<< endl;
//         }
     

        
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
void salary(){
    cout << " =========| optioncal function |=========="<< endl;
    cout << " 1. USD to KHR "<< endl;
    cout << " 2. KHR to USD "<< endl;
    cout << " 3. EUR to USD "<< endl;

}
int main(){

    system("clear");
    cout << " Enter option: ";
    int option;
    cin >> option;
    float salaryUSD;
    float salaryKHR;
    float salaryEUR;
    
    switch(option){
        case 1:{
            cout <<" USD to KHR "<<" Enter salaryUSD: ";cin >> salaryUSD;
            cout <<salaryUSD <<"USD \""<< salaryUSD*4000<<" Riel\""<< endl;
            break;
        }
        case 2:{
            cout << " KHR to USD "<<" Enter salaryKHR:" ;cin >> salaryKHR;
            cout << salaryKHR << " KHR=\""<< salaryKHR/4000<<" USD\""<< endl;
            break;
        }
        case 3:{
            cout << " EUR to USD "<< " Enter salaryEUR: ";cin >> salaryEUR;
            cout<< salaryEUR <<" EUR\""<< salaryEUR*1.2<<" USD\""<< endl;
            break;
        }
        case 0:{
            cout << " Thanks "<< endl;
            break;
            
        }
        default:{
        cout << " Invalid option! "<< endl;
        }
    }
    return 0;
}
// void USDToKHR(){
//     float USD;
//     int KHR;
//     cout << " Input USD: ";
//     cin >> USD;
//     cout << " USD= \""<< USD*4000<<"Riel\""<< endl;
// }
// void KHRToUSD(){
//     float USD;
//     int KHR;
//     cout << " Input KHR= ";
//     cin >> USD;
//     cout <<" KHR=\""<< KHR/4000<<"USD\""<< endl;
// }
// void EURToUSD(){
//     float USD;
//     int EUR;
//     cout <<" Input EUR= ";
//     cin >> EUR;
//     cout << " EUR\""<< EUR/1.2<<"USD\""<< endl;
// }

        
       


// int main(){
//     system("clear");
//     float USD;
//     float KHR;
//     float EUR;
//     salary();
//     cout << " Enter option ";
//     int option;
//     cin >> option;
//     float salary = 2;

    // switch(option){
    //     case 1:{
    //         cout << " Your salary is  "<< USD*4000 << endl;
    //         break;
    //     }
    //     case 2:{
    //         cout << " Your salary is  "<< option/4000<< endl;
    //         break;
    //     }
    //     case 3:{
    //         cout << " Your salary is  "<< option*1.2<< endl;
    //         break;
    //     }case 0:{
    //         cout << " goodBye "<<endl;
    //         break;
    //     }
    //     default:{
    //     cout << " Invalid option! "<< endl;
    //     }
     

        
//     }

//     return 0;
// }



