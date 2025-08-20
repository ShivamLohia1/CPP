#include<iostream>
using namespace std;
 class Counter{
    public:
    static int count;
    Counter(){
        count++;
    }
 };
 int Counter::count = 0;

 int main(){
    Counter c1;
    cout<<"Counter = "<<Counter::count<<endl;
    Counter c2;
        cout<<"Counter = "<<Counter::count<<endl;

 }