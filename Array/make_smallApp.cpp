#include <iostream>

#include<sstream>
using namespace std;

int row, col;


void setUpHall(const int r, const int c){
    
    row = r;
    col = c;
    string ha[r][c];
    string hallName;
    char k = 'A';
    for(int i=0; i<r; i++){
        stringstream z;
        z<<(i+1);
        string sub = "-";
        for(int j=0; j<c; j++,k++){
            ha[i][j] = k + sub + z.str() + ": AV";
        }
        // if(hallName ){
        //     cout << hallName +": BO "<<endl;
        // }
    }
    // 
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<" | "<<ha[i][j]<<" ";
        }
        cout<<" | \n";
    }
}
void bookhall(string **ha, string hallCode){
    for (int i=0; i<row;i++)
}

void choice(){
    cout<<"1/ Set up hall\n";
    cout<<"2/ List all hall\n";
    cout<<"3/ Start Booking\n";
    cout <<"0. Exit\n";
    cout<<"--------------------\n";
}
void ui(){
    cout<<"=================================\n";
    cout<<"           Hall Booking          \n";
    cout<<"=================================\n";
    choice();
    // 
    int ch;
    cout<<"[+] Insert option: ";cin>>ch;
    switch(ch){
        case 1:{
            int r, c;
          
            cout<<"Insert row: ";cin>>r;
            cout<<"Insert column: ";cin>>c;
            cout<<"Setup Hall"<<endl;
           
            setUpHall(r,c);
            break;
        }
        case 2:{
            cout<<"List all hall"<<endl;
            setUpHall(row,col);
            break;
        case 3:{
          
            cout << " Start Booking "<< endl;
            cout << "==============|Booking|============"<< endl;
            string hallName;
            // cout << " [+] Insert option: ";
            // cin >> ch;
            choice();
            int ch;
            cout << "[+] Enter hall name (A-1, B-1, or....): ";
            cin >> hallName;
            cout << "Booking successful on hall: "<< hallName<< endl;
            // if(hallName ==hallName){
            //     cout << hallName + ": BO"<< endl;
            // }
            break;

        }
        case 0:{
            cout << "Exiting the program.......\n";
            break;
        }
        }
        default:{
            cout<<"Invalid option! Please choice agian."<<endl;
        }
    }
}


int main(){
    while(1){
        ui();
    }
    return 0;
}