#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}

int main(){
    int a=10,b=20;
    float c=11.1,d=20.1;
    cout<<add(a,b)<<endl;
    cout<<add(c,d);
    return 0;
}

// main() cannot be overloaded in C++