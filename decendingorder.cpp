//arrange in decending order
#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    ifstream fin ("read.txt");
    char arr[5];
    short loop=0;
    string line;
    char ch;
    while(!fin.eof())
    {
         fin.get(ch);
         arr[loop] = ch;
       // getline(fin,line);
      //  arr[loop]=line;
       // cout<<arr[loop]<<endl;
        string s=" ";
    //    int size=sizeof(arr[loop])/sizeof(char);
    //     for(int i=0;i<size;i++)
    //     {
            
    //         s=s+arr[i];
    //     } 
      //  cout<<s<<endl;

     
        
        cout<<s<<endl;  
            
         loop++;
           
            

    }
           sort(arr,arr+5);
    return 0; 

        
    
    
    
   
}    