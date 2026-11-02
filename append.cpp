#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    int roll;
    //append records
    ofstream fout("student.txt",ios::app);
    
    cout<<"enter roll number:";
    cin>>roll;
    
    cout<<"enter name:";
    cin>>name;
    
    fout<< roll <<" "<< name <<endl;
    fout.close();
    //Display all records
    ifstream fin("student.txt");
    
    cout<<"\nStudent Records:\n";
    while(fin >> roll >> name)
    {
          cout << roll << " " << name << endl;
    }
    fin.close();
    return 0;
}    
