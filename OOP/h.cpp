#include <iostream>
#include <string>
using namespace std;
// Round 1
// class Utils{

//   private:
//     int s;
//     int  a;
//     double c;
//   public:
//     void sum(int x, int y){
//       s = x+y;
//       cout << " Sum: "<< s <<endl;
//     }
//     void square(int  x){
//       a = x*x;
//       cout << " Square: "<< a <<endl;
//     }
//     void salary(double b){
//         c = b/4000;
//         cout << "KhchangeTOUSD: "<< c << endl;

//     }
    
// };
// int main(){
//   Utils obj;
//   obj.sum(10,2);
//   obj.square(2);
//   obj.salary(10000);
//   return 0;
// }

// Round 2
class Pet{
    private:
    int id;
    string name;
    string color;
    string type;
        
    public:
       
        Pet(int id, string name, string color, string type):id(id),name(name),color(color),type(type){}
        void getPetDetail(){
            cout <<" ID: "<< id <<endl;
            cout <<" name: "<< name <<endl;
            cout <<" color: "<< color <<endl;
            cout <<" type: "<< type <<endl;
        }
        Pet(){
            
        }
};
int main(){
    system("clear");
    Pet pet(186,"Kii","Blue","cat");
    pet.getPetDetail();

    return 0;
}