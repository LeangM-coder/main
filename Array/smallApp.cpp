#include <iostream>
using namespace std;
int main(){
    system("clear");
    int numberStudent;
    cout << " How many student: ";
    cin >> numberStudent;
    // Declare array
    string nameList[numberStudent];
    int averageList[numberStudent];
    // Assign values to the array
    for (int i= 0; i<numberStudent; i++ ){
        cout << " Enter name of studnet "<< i+1<< " : ";
        cin >> nameList[i];
        cout << " Enter average of student: "<< i+1 << " : ";
        cin >> averageList[i];
    }
    // print all elements
    for(int i =0; i<numberStudent; i++){
        cout << " Name: "<< nameList[i] << endl;
        cout << " Average: "<< averageList[i]<< endl;
        cout << " =============| The end |==========="<< endl;
    }

    return 0;
}