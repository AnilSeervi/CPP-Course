#include<iostream>
using namespace std;
bool alphab(int a){
    if((a>=97 && a<=122) || (a>=65 && a<=90)){
        return true;
    }else{
        return false;
    }
}
int main(){
    char n;
    cout<<"Enter a Character: ";
    cin>>n;
    if(alphab(n)){
        cout<<"You've Entered an Alphabet.";
    }else{
        cout<<"You've Entered a Non-Alphabet.";
    }
    return 0;
}