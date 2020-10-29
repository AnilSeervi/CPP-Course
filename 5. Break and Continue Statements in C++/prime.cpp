#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"Enter a Number to check if its Prime or Not: ";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is not a Prime Number."<<endl;
            break;
        }
    }
        if(i==n||n==1){
            cout<<n<<" is a Prime Number."<<endl;
        }
    return 0;
}