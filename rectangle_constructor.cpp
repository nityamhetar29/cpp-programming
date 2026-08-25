#include <iostream>
using namespace std;

class Rectangle
{
    float length , breadth;
 
public:
 
    // Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
   
    // Parameterized Constructor
    Rectangle(float l , float b)
    {
         length = l;
         breadth = b;
    }
    
    // Copy Constructor 
    Rectangle(Rectangle & r)
    {
         length = r.length;
         breadth = r.breadth;
    }
    
    void area()
    {
        cout << "Length:" << length << endl;
        cout << "Breadth:" << breadth << endl;
        cout << " Area of Rectangle:" << length * breadth << endl;
    }
  };
  
  int main()
  {
      Rectangle r1;
      cout << "Default Constructor:" << endl;
      r1.area();
      
      Rectangle r2(10 , 4);
      cout << " \nParameterized Constructor:" << endl;
      r1.area();
      
      Rectangle r3(r2);
      cout << " Copy Contructor:" << endl;
      r3.area();
      
      return 0;
}      
    
         
