#include<iostream>
using namespace std;
int main(){
    int sidea,sideb,sidec;
    cout<<"Enter three sides of a triangle: ";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb&&sideb==sidec){
        cout<<"Its a Equilateral triangle."<<endl;
    }
    else if(sidea==sideb||sideb==sidec||sidec==sidea){
        cout<<"Its an Isosceles triangle."<<endl;
    }
    else{
        cout<<"Its a Scalene triangle."<<endl;
    }
    return 0;
}