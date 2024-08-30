#include <iostream>
#include <iomanip>
using namespace std;
void displayMenu(){
    cout << "======|Display All Employee|======="<< endl;
    cout << "1. Add employee "<< endl;
    cout << "2. Update employee "<<endl;
    cout << "3. Delete employee"<<endl;
    cout << "4. Sort employee emp by salary(Accending) "<< endl;
    cout << "5. Display all employee "<< endl;
    cout <<"0. Exit"<<endl;
    cout <<"=================="<<endl;
    cout << " Enter your option: ";

}
// Global Variables for employee 
int employeeId[100];
string employeeName[100];
float employeeSalary[100];

// Count number of employee
int employeeCount = 0;
// 1. Add Employee
void addEmployee(){
    system("clear");
    cout << "==========| Add  Employee |==========="<< endl;
    // auto increment employee id
    employeeId[employeeCount] = employeeCount +1;
    cout << " Enter Employee Name: ";
    cin.ignore();
    getline(cin, employeeName[employeeCount]);
    cout << " Enter Employee Salary: ";
    cin >> employeeSalary[employeeCount];
    employeeCount++;
    cout << " Employee Added Successfully! "<< endl;



}
// 5. Display all employee 
void displayAllEmployee(){
    system("clear");
    cout << "=========| Display All Employees|=========="<< endl;
    cout << setw(5)<< "ID"<< setw(20)<< "Name"<< setw(10)<< "Salary"<<endl;
    for(int i = 0; i< employeeCount; i++){
        cout <<  setw(5)<< employeeId[i]<<setw(20)<<employeeName[i]<<setw(10)<<employeeSalary[i]<< endl;
  
    }
    cout << " Tatal Employees: "<<  employeeCount << endl;
}
// 4.sort employee emp by salary
void sortEmployeeSalary(int arr[], int Size){
    for (int i = 0; i < Size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}












// 3. Delete employee
void deleteEmployee(){
    system("clear");
    string employeeName[employeeCount];
    string Name;
    int n = sizeof(employeeName)/sizeof(employeeName[0]);
    cout << " Enter the name you want to delete: ";
    cin >> Name;
    for(int i=0; i <n; i++){
        if (Name == employeeName[i]){
            for (int j=i; j< n-1; j++){
                employeeName[j]=employeeName[j+1];
                employeeName[employeeCount]=employeeCount + 1;
                employeeCount++;

            }
            n--;
            i--;
        }
    }
    cout << "Array after deleting the name: ";
    for (int i = 0; i< n; i++){
        cout << employeeName[i]<< " ";
    }
}

// int main(){
//     system("clear");
//     int option;
//     // string employeeName[100];
//     // int n , pos , count =0;
//     // cout << "Enter the size of an array: ";
//     // cin >> n;
//     // int arr[n];
//     // cout << " Enter array elements: ";
//     // for (int )
//     string employeeName[employeeCount];
//     string Name;
//     int n = sizeof(employeeName)/sizeof(employeeName[0]);
//     cout << " Enter the name you want to delete: ";
//     cin >> Name;
//     for(int i=0; i <n; i++){
//         if (Name == employeeName[i]){
//             for (int j=i; j< n-1; j++){
//                 employeeName[j]=employeeName[j+1];
//                 employeeName[employeeCount]=employeeCount + 1;
//                 employeeCount++;

//             }
//             n--;
//             i--;
//         }
//     }
//     cout << "Array after deleting the name: ";
//     for (int i = 0; i< n; i++){
//         cout << employeeName[i]<< " ";
//     }
    
//     do{
//         displayMenu();
//         cin >> option;
//         switch(option){
//             case 1:
//                 addEmployee();
//                 break;
//             case 3:{
//                 int n;
//                 string Name;
//                 cout << "Enter the size of an array: ";
//                 cin >> n;
//                 int arr[n];
//                 cout << " Enter array elements: ";
//                 for (int i= 0; i < n; i++ ){
//                 cin >> arr[i];
//                 }
//                 cout << " Enter the name: ";
//                 cin >> Name;
//             }
//             case 4:{

             
//             //     float employeeSalarys[100];
//             //     int sizeTotal = sizeof(employeeSalary);
//             //     int sizeElement = sizeof(employeeSalary[0]);
//             //     int numberElements = sizeTotal / sizeElement;
//             //     cout <<" Size of employeesalary array: "<< sizeTotal<< endl;
//             //     cout << "Size of element: " << sizeElement << endl;
//             //     cout << "Number of elements: " << numberElements << endl;
//             //     cout << "Original array: ";
//             //     sortEmployeeSalary(employeeSalary, numberElements);
//             //     for(int i=0; i< numberElements; i++){
//             //         for(int j=0; j<numberElements-1; j++){
//             //             if(employeeSalary[j] > employeeSalary[j+1]){
//             //                 int temp = employeeSalary[j];
//             //                 employeeSalary[j] = employeeSalary[j+1];
//             //                 employeeSalary[j+1] = temp;
//             //             }
//             //         }
//             //     }
//             //     cout << "Sorted array: ";
//             //     sortEmployeeSalary(employeeSalary, numberElements);
                
//             // }

            
//             case 5:
//                 displayAllEmployee();
//                 break;
            
//             case 0:
//                 cout << " Exiting the program...."<< endl;
//                 break;
//             default:
//                 cout << "Invaliad Opting! Please try again."<< endl;
//             }
//         }while(option !=0);

//     // float employeeSalary[100];
//     // int sizeTotal = sizeof(employeeSalary);
//     // int sizeElement = sizeof(employeeSalary[0]);
//     // int numberElements = sizeTotal / sizeElement;
//     // cout << "Size of employeesalary array: " << sizeTotal << endl;
//     // cout << "Size of element: " << sizeElement << endl;
//     // cout << "Number of elements: " << numberElements << endl;
//     // cout << "Original array: ";
   
//     // sortEmployeeSalary(employeeSalary, numberElements);
//     //    for(int i=0; i< numberElements; i++){
//     //     for(int j=0; j<numberElements-1; j++){
//     //         if(employeeSalary[j] > employeeSalary[j+1]){
//     //             int temp = employeeSalary[j];
//     //             employeeSalary[j] = employeeSalary[j+1];
//     //             employeeSalary[j+1] = temp;
//     //         }
//     //     }
//     // }
//     // cout << "Sorted array: ";
//     // sortEmployeeSalary(employeeSalary, numberElements);


    

//     return 0;
// }

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
                ();
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