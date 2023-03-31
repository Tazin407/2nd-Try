#include<iostream>
using namespace std;

int main(){

  int n=8;
  //cout<<"Enter the value of n";
  //cin>>n;
  for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++){
        if (j==(n-i))//ekhane <=dilei uporer part kata pore jabe
        {
            /* code */cout<<" ";

        }
        else
        cout<<"x";
        
    }
    cout<<endl;
  }
   

return 0;
}