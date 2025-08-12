#include<iostream>
using namespace std;
int main(){
    // string str;
    // cin>>str;
    // cout<<"My name is "<<str<<". I am a Google developer.\n";
    //getline()
    string str2;
    cout<<"Enter your name: ";
    getline(cin,str2);     //takes strings including " " (spaces)
    cout<<"Hello "<<str2;

}
