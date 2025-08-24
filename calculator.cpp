#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout << "Enter a 1st no. : " << endl;
    cin >> n;
    int p ;
    cout << "Enter a 2nd no. : " << endl;
    cin >> p;
    char a;
    cout<<"Enter a operator : " << endl;
    cin >> a;
    switch(a){
        case '+': cout << n+p << endl;break;
        case '-': cout << n-p << endl;break;
        case '/': cout << (float)n/p << endl;break;
        case '*': cout << n*p << endl;break;
    }
}
