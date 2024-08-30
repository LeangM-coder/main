#include <iostream> call libery
#include<string>
using namespace std;
class Teacher{
    private:
        int id,quanlity;
        string name, email;
    public:
        // Constructor initializer
        Teacher(int id, int quanlity, string name, string email): id(id),quanlity(quanlity),name(name),email(email)
        {}
        void teacherInfo(){
            cout <<" ID: "<< id <<endl;
            cout <<" quanlity: "<< quanlity <<endl;
            cout <<" name: "<< name <<endl;
            cout <<" email: "<< email <<endl;
        }
        
};
int main(){
    Teacher t1(12," Coca"," co@email.com");
    t1.teacherInfo();
    return 0;
}
