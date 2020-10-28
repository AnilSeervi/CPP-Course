#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value upto which consecutive sum is required: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}