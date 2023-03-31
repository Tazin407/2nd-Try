#include<iostream>
using namespace std;

int main(){

int row,column;
cout<<"Enter the value of row "<<endl;
cin>>row;

for (int i =row; i>=1; i--)
{
    /* code */for(int j=1;j<=i; j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

   
return 0;
}