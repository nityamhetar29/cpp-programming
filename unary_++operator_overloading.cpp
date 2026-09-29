#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    // Unary ++ operator overloading
    void operator++() {
        ++x;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Number n(10);

    ++n;          // Increment value by 1

    cout << "Output: ";
    n.display();

    return 0;
}
