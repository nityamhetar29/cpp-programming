#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingStaff()
    {
        getEmployee();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingStaff()
    {
        cout << "\n--- Teaching Staff Details ---";
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nEmployee Name: " << employeeName;
        cout << "\nDepartment: " << department;
        cout << "\nSubject: " << subject;
        cout << "\nQualification: " << qualification;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
private:
    string designation;
    float workingHours;

public:
    void getNonTeachingStaff()
    {
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingStaff()
    {
        cout << "\n--- Non-Teaching Staff Details ---";
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nEmployee Name: " << employeeName;
        cout << "\nDepartment: " << department;
        cout << "\nDesignation: " << designation;
        cout << "\nWorking Hours: " << workingHours;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "Enter Teaching Staff Details\n";
    t.getTeachingStaff();

    cout << "\nEnter Non-Teaching Staff Details\n";
    n.getNonTeachingStaff();

    t.displayTeachingStaff();
    n.displayNonTeachingStaff();

    return 0;
}
