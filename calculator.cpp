#include<iostream>
using namespace std;
int main()
{
    float n1;
    float n2;
    cout<<"enter two numbers "<<endl;
    cin>>n1>>n2;
    char oper='+';
    cout<<"enter operator "<<endl;
    cin>>oper;

    switch (oper)
    {
    case '+':
    cout<<n1+n2<<endl;
    break;
    case '-':
    cout<<n1-n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;
    case '*':
    cout<<n1*n2<<endl;
    break;
    
    default:
    cout<<"wrong operator "<<endl;
    break;
    }
    return 0;
}