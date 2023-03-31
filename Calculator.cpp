#include<iostream>
using namespace std;

int main(){

    char op;
    float num1,num2;
    
    cout<<"Enter the operator : +,-, x,/"<<endl;
    cin>>op;

    cout<<"Enter the numbers"<<endl;
    cin>>num1;
    cin>>num2;

    switch (op)
    {
      
    case '+':
      cout<<"Your value is "<<num1+num2;
        break;

        case '-':
        cout<<"Your value is "<<num1-num2;
        break;
        case 'x':
        cout<<"Your value is "<<num1*num2;
        break;
        case '/':
        cout<<"Your value is "<<num1/num2;
        break;
    
    default:

      cout<<"Error operator!!";
        break;
    }
  
return 0;
}