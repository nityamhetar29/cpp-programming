#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string data;
    //writing data into file
    ofstream fout("student.txt");
    
    cout<<"Enter data:";
    getline(cin,data);
    
    fout<<data;
    fout.close();
    
    //reading data from file
    ifstream fin("student.txt");
    
    cout<<"\nData from file:";
    getline(fin,data);
    
    cout<<data;
    
    fin.close();
    
    return 0;
}    
    
