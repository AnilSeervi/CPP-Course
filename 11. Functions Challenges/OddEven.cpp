#include<iostream>
using namespace std;
bool oddeven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter a number the check if its Odd or Even: ";
    cin>>n;
    if(oddeven(n)){
        cout<<n<<" is a Even Number.";
    }else{
        cout<<n<<" is a Odd Number.";
    }
    return 0;
}