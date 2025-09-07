#include<iostream>
using namespace std;

void print(){
    cout << "Hello C++" << endl;
}
int sum(int a, int b){
    return a + b;
}
int main(){
    cout << sum(10,20)<<endl;
    print();

}
