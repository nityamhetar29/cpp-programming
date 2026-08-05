#include <iostream>
using namespace std;

class Result
{ 
public:
   int m1,m2,m3,m4,m5,total;
   float per;
   
   void getData()
   {
        cout << "enter marks of 5 subjects:";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
   }
   
   void calculate()
   {
        total = m1 + m2 + m3 + m4 + m5;
        per = total/5.0;
   }
   
   void display()
   {
        cout << "Total =" << total << endl;
        cout << "percentage =" << per << "%" << endl;
         
                 if (per >= 35)
                     cout << "Result: Passed";
                 else 
                     cout << "Result: Failed";
   }
};

int main()
{
    Result r;
    r.getData();
    r.calculate();
    r.display();
    return 0;
}
    
