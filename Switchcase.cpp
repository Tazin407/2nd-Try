#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
     
     //switch case e khali integer e dewa jay. Onno value ney na 
    
    switch (age)
    {
    case 18:
        cout<<"Now you are 18";
        break;
   //break na dile shob kisu print hoye jabe
    case 89:
    cout<<"Ayo grandpa";
    break;

    default:
    cout<<"No special cases";
        break;
    }
    return 0;
}