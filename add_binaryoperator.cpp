#include <iostream>
using namespace std;

class Number
{
    int n;

public:
    void getData()
    {
        cin >> n;
    }

    Number operator+(Number n2)
    {
        Number n3;
        n3.n = n + n2.n;
        return n3;
    }

    void display()
    {
        cout << n;
    }
};

int main()
{
    Number n1, n2, n3;

    cout << "Enter first number: ";
    n1.getData();

    cout << "Enter second number: ";
    n2.getData();

    n3 = n1 + n2;

    cout << "Addition = ";
    n3.display();

    return 0;
}
