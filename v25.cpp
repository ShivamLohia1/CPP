#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int i = 0;
    while(i<n){
        int j=0;
        while(j<n){
            cout << "* ";
            j = j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}