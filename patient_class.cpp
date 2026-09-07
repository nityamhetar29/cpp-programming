#include <iostream>
using namespace std;

class Patient
{
    string name;
    int age;
    float consultationCharge;

public:
    void registerPatient()
    {
        cout << "Enter Patient Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Consultation Charge: ";
        cin >> consultationCharge;
    }

    void calculateCharge()
    {
        cout << "Consultation Charge: Rs. "
             << consultationCharge << endl;
    }

    void display()
    {
        cout << "\n--- Patient Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Charge: Rs. "
             << consultationCharge << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharge();
    p.display();

    return 0;
}
