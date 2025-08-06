#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    float fees;

    public:
    //setter:
    void set_property(string name,int age,float fees){
        this->name = name;
        this->age = age;
        this->fees = fees;
    }

    //getter:
    void get_value(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Fees: "<<this->fees<<endl;
    }
};

int main(){
    Student s1;
    s1.set_property("Shivam",20,10000);
    s1.get_value();

    Student s2;
    s2.set_property("asdf",19,2000.12);
    s2.get_value();
    return 0;
}