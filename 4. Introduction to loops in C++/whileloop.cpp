#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a integer: "<<endl;
    cin>>n;
    while(n>=0){
        cout<<"Enter a integer: "<<endl;
        cin>>n;
    }
    cout<<"Entered a negative integer.";
    return 0;
}