#include<iostream>
using namespace std;

int main(){

   //number chaile just arekta extra variable nite hobe 

   int n=5, count=1;
   for(int i=1; i<=n; i++){

    for (int j = 1; j <=i; j++)
    {
        /* code */cout<<count++<<" ";
    }
    cout<<endl;
   }
return 0;
}