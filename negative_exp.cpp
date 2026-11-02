#include<iostream>
using namespace std;
int main()
{
     int num;
     cout <<"enter a number:";
     cin >> num;
     try
     {
          if (num < 0)
          {
              throw  num;
          }
          cout <<"Number is positive:"<< num;
     }
     catch (int x)
     {
         cout <<"Exception: Negative number is not allowed!";
     }
     
     return 0;
}     
    
      
