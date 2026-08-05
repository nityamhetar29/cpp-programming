#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;
    
    void getData()
    {
       cout << "enter ID , Name and Salary:";
       cin >> id >> name >> salary;
    }
     
    void display() 
    {
       cout <<"\nEmployee ID:" << id;
       cout <<"\nName:" << name;
       cout <<"\nsalary:" << salary;
    }
};    
    
int main()
{
       Employee e;
       e.getData();
       e.display();
       return 0;
}
