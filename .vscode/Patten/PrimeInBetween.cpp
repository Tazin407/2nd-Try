#include<iostream>
#include<math.h>
using namespace std;

bool isTrue(int num){
    
    for (int i = 2; i<=sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
} 

int main(){
    int a,b;
    cout<<"Enter the lowest number"<<endl;
    cin>>a;
    cout<<"Enter the highest number"<<endl;
    cin>>b;
    for (int x =a; x<=b; x++)
    {
        if (isTrue(x))
        {
            cout<<x<<endl;
        }
        
    }
    

   
return 0;
}