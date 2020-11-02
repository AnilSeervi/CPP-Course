#include<iostream>
using namespace std;
int main(){
    int a=1100,b=1011;
    cout<<a<<"\t"<<b<<"\t"<<(a&b)<<"\t"<<(a|b)<<"\t"<<(a^b)<<"\t"<<(~a)<<"\t"<<(a<<2)<<"\t"<<(b>>2);
    return 0;
}