#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
        return true;
}
int main(){
    int a,b;
    cout<<"Enter the range to check for primes in between: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}