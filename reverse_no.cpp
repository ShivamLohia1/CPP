#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int temp = n;
    int rev = 0;
    while(temp!=0){
        int a = temp%10;
        rev=rev*10+a;
        temp/=10;
    }
    cout<<"Reverse = "<<rev<<endl;
    return 0;
}