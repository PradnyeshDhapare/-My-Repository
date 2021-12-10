//Create file to store employee details 
#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream fout;
    fout.open("employee.txt");
    int J_id;
    string s_name;

    fout<<"Enter Employee Id: ";
    cout<<"Enter Employee Id: "<<endl;
    cin>>J_id;
    fout<<J_id<<endl;

    fout<<"Enter Employee name: ";
    cout<<"Enter Employee name: "<<endl;
    cin>>s_name;
    fout<<s_name<<endl;    

    

    return 0;
}