#include <iostream>
using namespace std;

class LibraryBook
{
    string bookName;
    string author;
    bool issued;

public:
    void addBook()
    {
        cout << "Enter Book Name: ";
        cin >> bookName;

        cout << "Enter Author Name: ";
        cin >> author;

        issued = false;
    }

    void issueBook()
    {
        if (issued == false)
        {
            issued = true;
            cout << "Book issued successfully." << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (issued == true)
        {
            issued = false;
            cout << "Book returned successfully." << endl;
        }
        else
        {
            cout << "Book was not issued." << endl;
        }
    }

    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;

        if (issued == true)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    LibraryBook b;

    b.addBook();
    b.issueBook();
    b.display();

    b.returnBook();
    b.display();

    return 0;
}
