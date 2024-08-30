# include <iostream>
using namespace std;

// int main(){
//     int age; 
//     cout <<" =======| voting system|=====";
//     cout << " Enter your age: ";
//     if(age>=18){
//         cout<<" You can vote" << endl;

//     }else{
//         cout<< " You cannot vote " << endl;
//         cout << " you need to be " << 18-age << " year old to vote" << endl;

//     }

//     return 0;
// }


int main(){
    system("clear");
    cout<<"=====|Menu|=====" << endl;
    cout<<"1. add product"<<endl;
    cout<<"2. remove product"<<endl;
    cout<<"3. view product"<<endl;
    cout<<"0. exit"<<endl;
    int option;
    cout<<"Enter an option"<<endl;
    cin>>option;
    if(option !=0){
        cout<<" The system continue working "<<endl;

    }else{
        cout <<" The system will exit"<<endl;

    }



    return 0;
}

