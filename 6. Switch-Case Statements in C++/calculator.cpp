#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cout<<"Enter the operation( + , - , * , / ) to perform: ";
    cin>>op;
    cout<<"Enter two operands to perform "<<op<<endl;
    cin>>n1>>n2;
    switch (op)
    {
    case '+':
        cout<<"Sum is: "<<n1+n2<<endl;
        break;
    case '-':
        cout<<"Difference is: "<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Multiplication is: "<<n1*n2<<endl;
        break;
    case '/':
        cout<<"Division is: "<<n1/n2<<endl;
        break;    
    default:
        cout<<"Enter another Operator!!!";
        break;
    }
    return 0;
}