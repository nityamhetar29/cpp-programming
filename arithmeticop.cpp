#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    
    cout << "enter two numbers:";
    cin >> a >> b;
    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout << "enter choice:";
    cin >> choice;
    
    switch(choice) {
        case 1:
             cout << "sum = " << a + b;
             break;
        case 2:
              
             cout << "difference = "<< a - b;
             break;
        case 3:
              cout << "product ="<< a * b;
              break;
        case 4:
              cout << "division ="<<(float)a / b;
              break;
         default:
              cout << "invalid choice";
         }
         return 0;
  }       
