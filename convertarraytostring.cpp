//Convert char array to string e.g. ['a','b','c','d'] to "abcd"
#include <iostream>
#include<string>  
using namespace std;  
int main()   
{  
    char char_array[] = {'a','b','c','d'};  
    int array_size = sizeof(char_array) /
    sizeof(char);  
    string j = " ";  
    int i;  
    for(i = 0; i < array_size; i++) 
    {
        j = j + char_array[i]; 
        
    } 
    cout <<j<<endl; 

   
}  
    