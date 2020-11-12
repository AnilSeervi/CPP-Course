#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number to reverse: ";
    cin>>n;
    int rev;
    while(n>0){
        int lastDigit=n%10;
        rev = rev*10 + lastDigit;
        n=n/10;
    }
    cout<<rev<<" is the reversed number.";
    return 0;
}