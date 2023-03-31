#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter the row and column"<<endl;
    cin>>r>>c;
    for (int i = 1; i <=r; i++)
    {
        for(int j= 1; j<=c; j++){

            if (i==1|| i==r||j==1||j==c)
            {
                cout<<"x";
                //a little space here changes the whole pattern
            }
            else
            cout<<" ";
            
        }
        cout<<endl;
    }
    
   
   
  return 0;
    }