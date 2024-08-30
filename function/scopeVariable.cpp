#include <iostream>

using namespace std;
int main(){
    system("clear");

    string name = "Yin";
    cout << " Name: "<< name << endl;
    {
        string name = "Lang";
        int age = 18;
        cout << " Name: "<< name << endl;
    }
    // cout << " Age: "<< age << endl; cannot return because age in differene block
    return 0;
}