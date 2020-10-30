#include<iostream>
using namespace std;
int main(){
    char choice;
    cout<<"Languages:"<<endl<<"a: English"<<endl<<"b. Hindi"<<endl<<"c. French"
    <<endl<<"d. Spanish"<<endl<<"e. Itilian"<<endl;
    cout<<"Of the abouve languages select the one for greetings: ";
    cin>>choice;
    switch(choice){
        case 'a':
            cout<<"Hello!"<<endl;
            break;
        case 'b':
            cout<<"Namaste!"<<endl;
            break;
        case 'c':
            cout<<"Salut!"<<endl;
            break;
        case 'd':
            cout<<"Hola!"<<endl;
            break;
        case 'e':
            cout<<"Ciao!"<<endl;
        default:
            cout<<"I'm still Learning More Languages..."<<endl;
            break;
    }
    return 0;
}