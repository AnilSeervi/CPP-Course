#include<iostream>
using namespace std;
int main(){
    int n;
    do{
    cout<<"Enter a integer: "<<endl;
    cin>>n;
    }while(n>=0);
    cout<<"Entered a negative integer.";
    return 0;
}