#include<iostream>
using namespace std;

int main(){

   int n=3;

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" x ";
        }
        int space=2*n-2*i;
        for (int j = 1; j <=space; j++)
        {
            cout<<"   ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<" x ";
        }
        cout<<endl;
    }
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" x ";
        }
        int space=2*n-2*i;
        for (int j = 1; j <=space; j++)
        {
            cout<<"   ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<" x ";
        } 
        cout<<endl;
    }
    
    
   
return 0;
}