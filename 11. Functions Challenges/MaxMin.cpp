#include<iostream>
using namespace std;
bool check(int n, int m){
    if(n>m){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter any three numbers: ";
    cin>>a>>b>>c;
    if(check(a,b) && check(a,c)){
        cout<<a<<" is the Largest."<<endl;
    }else if(check(b,c) && check(b,a)){
        cout<<b<<" is the Largest."<<endl;
    }else{
        cout<<c<<" is the Largest."<<endl;
    }
    if(!check(a,b) && !check(a,c)){
        cout<<a<<" is the Smallest."<<endl;
    }else if(!check(b,c) && !check(b,a)){
        cout<<b<<" is the Smallest."<<endl;
    }else{
        cout<<c<<" is the Smallest."<<endl;
    }
    return 0;
}