#include<iostream>
using namespace std;
//class outside main on top
class Student{  //used-defined datatype
    public:     //to make class open for all (by default class is private)

    //data members:
    string name;
    int age;
    float fees;

    //member method: 
    void display(){  
        cout<<"Name = "<<name<<endl<<"Age = "<<age<<endl<<"Fees = "<<fees;
    }
};

int main(){
    Student s1;
    s1.name = "Shivam";
    s1.age = 20;
    s1.fees = 30.5;
    s1.display();
    return 0;
}