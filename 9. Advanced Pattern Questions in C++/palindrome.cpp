#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int z=i;
        for(int k=1;k<=i;k++){
            cout<<z;
            z--;
        }if(i>1){
        for(int l=2;l<=i;l++){
            cout<<l;
        }
        }
    cout<<endl;
    }
    return 0;
}