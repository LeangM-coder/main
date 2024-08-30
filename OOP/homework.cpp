#include <iostream> 
#include <vector>
using namespace std;
class User{
    private:
        int id;
        string name;
        string email;
        string password;
        string profile;
        string isDelete;
        string isVerified;
    public:
        void setData(int id,string name,string email,string password,string profile,string isDelete,string isVerified){
            this->id = id;
            this->name = name;
            this->email = email;
            this->password = password;
            this->profile = profile;
            this->isDelete = isDelete;
            this->isVerified = isVerified;
        }
        void displayData(){
        cout << " ID: "<< this->id <<endl;
        cout << " Name: "<< this->name<<endl;
        cout << " email: $"<< this->email <<endl;
        cout << " password: "<< this->password<<endl;
        cout << " profile: "<< this->profile<<endl;
        cout << " isDelete: "<< this->isDelete<<endl;
        cout << " isVerified: "<< this->isVerified<<endl;
    }

};




int main(){
    vector <User> users;
    int id;
    string name;
    string email;
    string password;
    string profile;
    string isDelete;
    string isVerified;
    cout <<" [+] Insert product ID: ";cin >> id;
    cout <<" [+] Insert product name: ";cin >> name;
    cout <<" [+] Insert product email: ";cin >> email;
    cout <<" [+] Insert product password: ";cin >> password;
    cout <<" [+] Insert product profile: ";cin >> profile;
    cout <<" [+] Insert product isDelete: ";cin >> isDelete;
    cout <<" [+] Insert isVerified: ";cin >>isVerified;
    User user;
    user.setData(id , name , email , password, profile, isDelete, isVerified);
    users.insert(users.end(),user);
    
    return 0;
} 