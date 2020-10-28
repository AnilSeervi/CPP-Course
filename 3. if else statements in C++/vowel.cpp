#include<iostream>
using namespace std;
int main(){
    char inp;
    bool upper, lower;
    cout<<"Enter an alphabet: ";
    cin>>inp;
    upper=(inp=='A'||inp=='E'||inp=='I'||inp=='O'||inp=='U');
    lower=(inp=='a'||inp=='e'||inp=='i'||inp=='o'||inp=='u');
    if(upper||lower){
        cout<<inp<<" is a Vowel."<<endl;
    }else{
        cout<<inp<<" is a Consonant."<<endl;
    }
    return 0;
}