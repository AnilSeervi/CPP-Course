#include<iostream>
using namespace std;
int main(){
    int a=10,b;
    char ch ='a';
    cout<<sizeof(a)<<endl; // sizeof
    a==10?cout<<a<<endl:cout<<b<<endl; // ternary operator
    cout<<int(ch)<<endl;
    a=(2,3,4); //comma: causes a sequence of operations to be performed
    cout<<a<<endl;
    cout<<&a<<endl; //print address of a
    int *c = &a; //pointers
    cout<<c<<endl<<*c;
    return 0;
}