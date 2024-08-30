#include<iostream>
#include<string>
#include <vector>

using namespace std;

class Product{
  private:
    int id;
    string name;
    double price;
    int quantity;
  public:
    void setData(int id, string name, double price, int quantity){
      this->id = id;
      this->name = name;
      this->price = price;
      this->quantity = quantity;

    }
    void displayData(){
      cout << " ID: "<< this->id <<endl;
      cout << " Name: "<< this->name<<endl;
      cout << " Price: $"<< this->price <<endl;
      cout << " Quantity: "<< this->quantity<<endl;
    }
   
};

int main(){
  system("clear");
  vector <Product>products;
  int n;
  cout << " [+] Enter the number of products: ";cin>> n;
  for (int i=0; i<n; i++){
    int id;
    string name;
    double price;
    int quantity;
    // insert data
    cout <<" [+] Insert product ID: ";cin >> id;
    cout <<" [+] Insert product name: ";cin >> name;
    cout <<" [+] Insert product price: ";cin >> price;
    cout <<" [+] Insert product quantity: ";cin >> quantity;
    Product product;
    product.setData(id , name , price , quantity);
    products.insert(products.begin(),product); // (product.end(),product) the answer is bounded converage 
  
  } 
  for (Product p : products){
    p.displayData();
  }

  
    return 0;
}