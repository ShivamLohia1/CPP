#include <iostream>
using namespace std;
void print(int n){
    if(n>5){
        return;
    }
    cout<<n<<endl;
    print(n+1);
}
int main(){
    print(1);
}

#include<iostream>
using namespace std;

//Head recursion:
void head(int n){
    if(n>5) return;
    cout<<n<<" ";
    head(n+1);
}


//Tail recursion:
void tail(int n){
    if(n>5) return;
    tail(n+1);
    cout<<n<<" ";
}

int main(){
    head(1);
    cout<<endl;
    tail(1);
    return 0;

}

