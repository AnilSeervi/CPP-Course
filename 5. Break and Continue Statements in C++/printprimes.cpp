#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the range a and b within which Prime numbers to be printed: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int j;
        for(j=2;j<=i-1;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
        cout<<i<<"\t";
        }
    }
    return 0;
}