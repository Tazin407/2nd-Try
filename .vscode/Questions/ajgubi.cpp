#include<iostream>
#include<cmath>
using namespace std;

int main(){
  
  int t;
  cout<<"Input your time in 24 hour system ";
  cin>>t;
  if (t>=0 && t<24)
  {
    if (t>=4 && t<=6)
    {
       cout<<"breakfast"<<endl;
    }
    else if (t==12 ||t ==13)
    {
      cout<<"lunch"<<endl;
    }
    else if (t==16 || t==17)
    {
      cout<<"Snacks"<<endl;
    }
     else if (t==19 || t==20)
    {
      cout<<"Dinner"<<endl;
    }
    


    cout<<"Patience is a virtue";
  }
  else
  cout<<"Wrong time";
  
  

   
return 0;
}