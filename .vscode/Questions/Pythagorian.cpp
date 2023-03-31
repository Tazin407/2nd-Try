#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;


bool pyth(int x, int y, int z ){
     int a=max(x,max(y,z));
     int b,c;

     if (a==x)
     {
        b=y;
        c=z;
     }
     else if (a==y)
     {
        b=x;
        c=z;
     }
     else
     b=x;
     c=y;
     if ((a*a)==c*c+b*b)
     {
        return true;
     }
     else
     return false;
}

int main(){

    int p,q,r;
    cout<<"Enter 3 numbers"<<endl;
    cin>>p>>q>>r;
    if (pyth(p,q,r))
    {
        cout<<"They are pythagorean trio";
    }
    else
    cout<<"I got them now byee ";

     
return 0;
}