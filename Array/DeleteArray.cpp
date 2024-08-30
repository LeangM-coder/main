#include <iostream>
using namespace std;
int main(){
    system("clear");
    int valuse[]={1, 3 ,4, 5, 6, 3, 5, 7};
    string name[100];
    int n = sizeof(valuse)/sizeof(valuse[0]);
    int m = sizeof(name)/sizeof(name[0]);
    int element;
    string  element2;
    // cout << " Enter the element you want to delete: ";
    // cin >> element;
    // for (int i = 0; i < n; i++){
    //     // search for the element 
    //     if (element == valuse[i]){
    //         // replace the element with the next element
    //         for(int j= i; j < n -1; j++){
    //             valuse[j]=valuse[j+1];
    //         }
    //         n--;
    //         i--; // recheck th current index
    //     }
    // }
    // cout << " Array after deleting the element: ";
    // for (int i =0; i < n; i++){
    //     cout << valuse[i]<< " ";
    // }
    cout << " Enter the element2 you want to delete: ";
    cin >> element2;
    for(int i=0; i < m; i++){
        if (element2 == name[i]){
            for (int j=i; j< m-1; j++){
                name[j]=name[j+1];
            }
            m--;
            i--;
        }
    }
    cout << "Array after deleting the element: ";
    for (int i = 0; i< m; i++){
        cout << name[i]<< " ";
    }
    return 0;
}