#include<iostream>
using namespace std;
void fib(int a){
    int t1=0,t2=1,nextTerm;
    for(int i=1;i<=a;i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number of fibonacci numbers to be printed: ";
    cin>>n;
    fib(n);
    return 0;
}