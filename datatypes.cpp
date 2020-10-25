#include <iostream>
using namespace std;
int main(){
    int a;//declaration
    a=12;//initialization
    cout<<"size of int "<<sizeof(a)<<" bytes"<<endl;
    float b;
    cout<<"size of float "<<sizeof(b)<<" bytes"<<endl;
    char c;
    cout<<"size of char "<<sizeof(c)<<" bytes"<<endl;
    bool d;
    cout<<"size of bool "<<sizeof(d)<<" bytes"<<endl;

    short int si;
    long int li;
    cout<<"size of shortint "<<sizeof(si)<<" bytes"<<endl;
    cout<<"size of longint "<<sizeof(li)<<" bytes"<<endl;
    return 0;
}