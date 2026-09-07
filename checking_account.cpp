#include<iostream>
using namespace std;
class checkingaccount
{
private:
string accountholdername;
int accountnumber;
double balance;
double transactionfee;

public:
checkingaccount(string name,int accnumber,double initialbalance,double fee){
accountholdername=name;
accountnumber=accnumber;
balance=initialbalance;
transactionfee=fee;
}

void deposit(double amount)
{
if(amount>0){
balance+=amount;
cout<<"deposited:$"<<amount<<endl;
}
}

void withdraw(double amount)
{
double total=amount+transactionfee;
if(total<=balance){
balance=total;
cout<<"withdrawn:$"<<amount<<"($"<<transactionfee<<"fee applied)"<<endl;
}
else
{
cout<<"Insufficientbalance balance foe withdrawl+fee"<<endl;
}
}

void display()
{
cout<<"\n[checking account]"<<endl;
cout<<"account holder"<<accountholdername<<endl;
cout<<"account number"<<accountnumber<<endl;
cout<<"transaction fee:"<<transactionfee<<endl;
}
};

int main()
{
checkingaccount checking("Nitya",1005,6000.0,20.0);
checking.display();
checking.deposit(1500);
checking.withdraw(1000);
checking.display();
return 0;
}
