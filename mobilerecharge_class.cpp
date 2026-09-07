#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNumber;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        balance = 0;
    }

    void recharge()
    {
        float amount;

        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Recharge successful." << endl;
    }

    void deductBalance()
    {
        float amount;

        cout << "Enter Amount to Deduct: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Current Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.createAccount();
    m.recharge();
    m.deductBalance();
    m.display();

    return 0;
}
