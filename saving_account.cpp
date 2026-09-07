#include<iostream>
using namespace std;

class savingaccount 
{
private:
string accountholdername;
int accountnumber;
double balance;
double interestrate;
public:
savingaccount(string name,int accnumber,double initialbalance,double rate)
{
accountholdername=name;
accountnumber=accnumber;
balance=initialbalance;
interestrate=rate;
}
void deposit(double amount)
{
if(amount>0 && amount<=balance)
{
balance=amount;
cout<<"withdrawn:$"<<amount<<endl;
}else
{
cout<<"insufficient balance"<<endl;
}
}
void withdraw(double amount)
{
if(amount>0 && amount<=balance){
balance=amount;
cout<<"withdrawn:$"<<amount<<endl;
}
}

void applyinterest()
{
double interest=balance*interestrate/100;
balance+=interest;
cout<<"interest applied:$"<<interest<<endl;
}
void display()
{
cout<<"\n[savings account]"<<endl;
cout<<"account holder:"<<accountholdername<<endl;
cout<<"account number:"<<accountnumber<<endl;
cout<<"balance:$"<<balance<<endl;
cout<<"interest rate:"<<interestrate<<"%"<<endl;
}
};
int main()
{
savingaccount savings("Nitya",1001,6000.0,2.0);
savings.display();
savings.deposit(1000);
savings.withdraw(2000);
savings.applyinterest();
savings.display();
return 0;
}
