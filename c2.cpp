#include <iostream>
using namespace std;
int main(){
    string str = "Shivam";
    cout<<str<<endl;
    cout<<"Length: "<<str.length()<<endl;
    cout<<str[5]<<endl; //'n'
    cout<<str.find('r')<<endl;  //2nd index
    cout<<str.append(" Lohia")<<endl;
    cout<<str.substr(1,5);
}