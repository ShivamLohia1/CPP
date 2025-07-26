#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three number:"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"A is greatest"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<"B is greatest"<<endl;
    }
    else{
        cout<<"C is greatest"<<endl;
        
    }
}