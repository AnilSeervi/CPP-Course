#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for tables: "<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}