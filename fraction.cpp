
   #include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;

public:
    // Accept a fraction
    void accept() {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    // Add two fractions
    Fraction add(Fraction f) {
        Fraction result;

        result.numerator = (numerator * f.denominator) +
                           (f.numerator * denominator);

        result.denominator = denominator * f.denominator;

        return result;
    }

    // Display the fraction
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1, f2, sum;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "\nEnter second fraction:\n";
    f2.accept();

    sum = f1.add(f2);

    cout << "\nSum of fractions = ";
    sum.display();

    return 0;
}

