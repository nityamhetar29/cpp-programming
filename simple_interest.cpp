#include <iostream> 
using namespace std;

class Interest
{
public:
    float p,r,t,si;
    
    void getData()
    {
         cout << "enter Principal, Rate and Time:";
         cin >> p >> r >> t;
    }
    
    void calculate()
    {
         si = (p*r*t)/100;
    }
    
    void display()
    {
         cout << "Simple Interest =" << si;
    }
};

int main()
{
    Interest i;
    i.getData();
    i.calculate();
    i.display();
    return 0;
}    
    
     
