#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    
    cout<<"Max is: ";
    if(a>b){
        if(a>c){
            cout<<a;
        }else{
            cout<<b;
        }
    }else{
        if(b>c){
            cout<<b;
        }else{
            cout<<c;
        }
    }
    return 0;
}