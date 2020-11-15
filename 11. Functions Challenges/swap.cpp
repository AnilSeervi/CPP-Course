#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;    
}
int main(){
    int n,m;
    cout<<"Enter two numbers a & b: ";
    cin>>n>>m;
    cout<<"Before Swapping:"<<endl<<"a="<<n<<endl<<"b="<<m;
    swap(n,m);
    cout<<endl<<"After Swapping:"<<endl<<"a="<<n<<endl<<"b="<<m;
    return 0;
}