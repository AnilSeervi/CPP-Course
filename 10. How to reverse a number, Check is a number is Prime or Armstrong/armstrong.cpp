#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check for Armstrong: ";
    cin>>n;
    int sum=0,a=n;
    while(n>0){
        int lastDigit =  n%10;
        sum+=lastDigit*lastDigit*lastDigit;
        n=n/10;
    }
    if(sum==a){
        cout<<a<<" is Armstrong.";
    }else{
        cout<<a<<" is not Armstrong.";
    }
    return 0;
}