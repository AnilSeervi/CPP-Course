#include<iostream>
using namespace std;
int main(){
    int num,chk;
    cout<<"Enter a number: ";
    cin>>num;
    chk=num%2;
    if(chk==0){
        cout<<num<<" is even number.";
    }else{
        cout<<num<<" is odd number.";
    }
    return 0;
}