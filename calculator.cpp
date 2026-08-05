#include <iostream>
using namespace std;

class Calculator
{
public:
    int a, b;
    
    void getData()
    {
         cout << "enter two numbers:";
         cin >> a >> b;
    }
    
    void calculate()
    {
         cout << "addition =" << a+b << endl;
         cout << "subtraction =" << a-b << endl;
         cout << "multiplication =" << a*b << endl;
         cout << "divison =" << a/b << endl;
         cout << "mod =" << a%b << endl;
    }
};

int main()
{
   Calculator c;
   c.getData();
   c.calculate();
   return 0;
}     
