#include <iostream>

using namespace std;
class Animal{
    private:
        string name;
    public:
        Animal(){
            cout << " Hello !"<<endl;
        }
        Animal(string name){
            this->name = name;
            cout << name<<endl;
        }
        ~Animal(){// deconstriuctor for delete in memory
          cout << " Goodbye kon pa pa  in animal form"<<endl;
        } 

};


int main(){
    system("clear");
    Animal animal;
    Animal animal2(" Cat");
    Animal *an = new Animal;
    delete an;


    return 0;
}
