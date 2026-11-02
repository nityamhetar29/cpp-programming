#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int roll;

    // Append records
    ofstream fout("student.txt", ios::app);

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    fout << roll << " " << name << endl;
    fout.close();

    // Display all records
    ifstream fin("student.txt");

    cout << "\nStudent Records:\n";

    while (fin >> roll >> name)
    {
        cout << roll << " " << name << endl;
    }

    fin.close();

    return 0;
}
