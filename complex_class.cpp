#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void subtract(Complex c1, Complex c2)
    {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }
void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main()
{
    Complex c1, c2, c3, c4;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "Enter second complex number:\n";
    c2.getData();

    c3.add(c1, c2);
    cout << "\nAddition = ";
    c3.display();

    c4.subtract(c1, c2);
    cout << "Subtraction = ";
    c4.display();

    return 0;
}
