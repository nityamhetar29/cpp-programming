#include <iostream>
using namespace std;

class Product
{
    int ProductID;
    string name;
    float price;
    int quantity;
    
  public:
     //Parameterized Constructor
     Product(int id , string n ,float p, int q)
     {
          ProductID = id;
          name = n;
          price = p;
          quantity = q;
     }    
     
     // Display Product Details 
     void Display()
     {
        cout << " Product ID:" << ProductID << endl;
        cout << " Name:" << name << endl;
        cout << " Price:" << price << endl;
        cout << " Quantity:" << quantity << endl;
      }
      
      // Calculate Total Cost 
      float totalCost()
      {
        return price * quantity;
      }
   };
   
   int main()
   {
     Product p(101, "Laptop", 60000 ,2);
     cout << "Product Details:" << endl;
     p.Display();
     cout << "Total Cost:" << p.totalCost() << endl;
     return 0;
}     
         
