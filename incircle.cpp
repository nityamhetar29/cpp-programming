#include <iostream>
using namespace std;

class Circle
{
public:
   float r,area,circumference;
   
   void getData()
   {
        cout << "enter radius:";
        cin >> r;
   }
   
   void calculate()
   {
        area = 3.14 * r * r;
        circumference = 2 * 3.14 * r;
   }
   
   void display()
   {
        cout << "area =" << area << endl;
        cout << "circumference =" << circumference;
  }
};

int main()
{
    Circle c;
    c.getData();
    c.calculate();
    c.display();
    return 0;
}    

