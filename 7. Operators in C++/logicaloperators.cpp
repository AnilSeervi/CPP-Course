#include<iostream>
using namespace std;
int main(){
    int a=10,b=10;
    if(a==10 && b==10){
        cout<<"a=b"<<endl;
    }
    if(a==10 || b==10){
        cout<<"a or b is 10"<<endl;
    }
    if(!(a==12)){
        cout<<a;
    }
    return 0;
}