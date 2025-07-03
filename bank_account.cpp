#include<iostream>
using namespace std;

int main(){
    char n;
    cout << "Do you have addhar and pan card : ";
    cin >> n;
    if(n=='Y'){
        cout<<"You are eligible for bank account." << endl;
    }
    else{
        cout<<"You are not eligible for bank account." << endl;
    }
    return 0;
}