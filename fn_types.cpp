#include<iostream>
using namespace std;

/*Types of fn: 
    1. Takes SOMETHING return SOMETHING.
    2. Takes SOMETHING return NOTHING.
    3. Takes NOTHING return NOTHING.
    4. Takes NOTHING return SOMETHING>
*/

int sum(int a,int b){
    return a+b;
}

void greet(string name){
    cout<<"Hi "<<name<<endl;
}

void helloWorld(){
    cout<<"Hello world\n";
}

int print(){
    int n = 10;
    return n;
}

int main(){
    int a=10,b=20;
    string name = "Shivam";

    cout<<sum(a,b)<<endl;
    greet(name);
    helloWorld();
    cout<<print()<<endl;

    return 0;
}