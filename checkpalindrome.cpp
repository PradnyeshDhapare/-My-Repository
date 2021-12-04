//Get an input from the user and check whether number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"enter "<<n<<" numbers with spaces between them "<<endl;
    int arr[n];
    bool check=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
    return 0;
}