#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a 1st number: ";
    cin >> a;
    int b;
    cout << "Enter a 2nd number: ";
    cin >> b;
    int c;
    cout << "Enter a 3rd number: ";
    cin >> c;
    if(a>b&&a>c){
        cout<<"Largest number is: " << a << endl;
    }
    else if(b>a&&b>c){
        cout<<"Largest number is: " << b << endl;
    }
    else if(c>a&&c>b){
        cout<<"Largest number is: " << c << endl;
    }
    else{
        cout<<"All numbers are equal." << endl;
    }

}