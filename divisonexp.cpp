#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout <<"enter two numbers:";
    cin >> a >> b;
    
    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout <<"Divison =" << a / b;
    }
    catch (int x)
    {
          cout <<"Exception:Divison by zero is not allowed!";
    }
    
    return 0;
}    
