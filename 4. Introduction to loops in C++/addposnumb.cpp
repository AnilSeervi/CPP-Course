#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a integer: "<<endl;
    cin>>n;
    int sum=0;
    while(n>=0){
        sum=sum+n;
        cout<<"Enter a integer: "<<endl;
        cin>>n;
    }
    cout<<"Entered a negative number. The sum is: "<<sum;
    return 0;
}