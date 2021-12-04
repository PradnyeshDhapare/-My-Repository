//Reverse elements of an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter total numbers in array "<<endl;
    cin>>n;
    cout<<"enter elements in array "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}