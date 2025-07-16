#include<iostream>
using namespace std;

void print();


int main(){ 
    print();

    return 0;
}

void print(){
    cout<<"Hello world\n"<<endl;
}


void country(string name = "India"){
    cout<<"Welcome to "<<name<<endl;
}

int main(){
    country("USA");

    return 0;
}