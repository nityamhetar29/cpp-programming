#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int roll_no;
    string name;
    string cls;

public:
    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> cls;
    }
};

// Derived class 1
class Student_Marks : public Student
{
protected:
    int marks[5];
    int total_marks;

public:
    void getmarks()
    {
        total_marks = 0;

        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];

            total_marks = total_marks + marks[i];
        }
    }
};

// Derived class 2
class Student_Perc : public Student_Marks
{
private:
    float percentage;

public:
    void calculate_perc()
    {
        percentage = total_marks / 5.0;
    }

    void display_info()
    {
        cout << "\n----- Student Information -----" << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << cls << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total_marks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Main function
int main()
{
    Student_Perc obj;

    obj.getdata();
    obj.getmarks();
    obj.calculate_perc();
    obj.display_info();

    return 0;
}
