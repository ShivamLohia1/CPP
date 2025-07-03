#include<iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 20.21;
    char c = 'A';
    string str = "PB_03";

    cout<<"Size of integer : "<<sizeof(a)<<endl;
    cout<<"Size of float : "<<sizeof(b)<<endl;
    cout<<"Size of character : "<<sizeof(c)<<endl;  
    cout<<"Size of string : "<<sizeof(str)<<endl;
    return 0;
}