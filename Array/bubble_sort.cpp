#include <iostream>
using namespace std;
void printArray(int arr[], int Size){
    for (int i = 0; i < Size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// int main(){
//     system("clear");
//     int rankStudents[]= {5, 3, 1, 4, 2};
//     int r
//     cout << " Original Array: ";
//     printArray(rankStudents, 5)
//     for(int i = 0, i <5, i++){
//         for {int j=0, j<5-1, j++}{
//             for(rankStudents[j]> rankStudents[j+1]){
//                 int temp = rankStudents[j];
//                 rankStudents[j] = rankStudents[j+1];
//                 rankStudents[j+1]= temp;

                
//             }

//         }

//     }
//     cout <<" sorted Array: ";
//     printArray(rankStudents, 5);
//     return 0;
// }

int main(){
    system("cls");
    int rankStudents[] = {5, 3, 1, 4, 2};
    int rankStudents2[100];

    int sizeTotal = sizeof(rankStudents2);
    int sizeElement = sizeof(rankStudents2[0]);

    int numberElements = sizeTotal / sizeElement;

    cout << "Size of rankStudents2 array: " << sizeTotal << endl;
    cout << "Size of element: " << sizeElement << endl;
    cout << "Number of elements: " << numberElements << endl;

    cout << "Original array: ";
    printArray(rankStudents2, numberElements);

    // algorithm for bubble sort
    for(int i=0; i< numberElements; i++){
        for(int j=0; j<numberElements-1; j++){
            if(rankStudents2[j] > rankStudents2[j+1]){
                int temp = rankStudents2[j];
                rankStudents2[j] = rankStudents2[j+1];
                rankStudents2[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    printArray(rankStudents2, numberElements);

    return 0;
}