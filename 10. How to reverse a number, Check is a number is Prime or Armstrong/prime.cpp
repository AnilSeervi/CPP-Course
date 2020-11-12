#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number to check for prime: ";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number.";
            break;
        }
    }
        if(i==n||n==1||n==2){
            cout<<n<<" is a prime number.";
        }
    return 0;
}