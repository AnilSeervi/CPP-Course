#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r in nCr:";
    cin>>n>>r;
    cout<<factorial(n)/(factorial(n-r) * factorial(r));
    return 0;
}