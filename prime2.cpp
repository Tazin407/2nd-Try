#include<iostream>
using namespace std;

int main(){

   int num1,num2,b;

    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;

    cout<<"Your numbers are ";
    for (int i =num1; i <=num2; i++)
    {
        for ( int n = 1; n <=i; n++)
        { if (i%n==0)
        {
            b++;
            cout<<i<<endl;
        }}
    }
        
        
        
    
    

return 0;
}