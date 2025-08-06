#include<iostream>
using namespace std;
class student{

    private:
    string name;
    int age;
    public: student(string name, int age){
        this->name = name;
        this->age = age;
    }

    friend void show_Info(student s1);
};
void show_Info(student s1){
    cout<<"Name= "<<s1.name<<endl<<"Age= "<<s1.age<<endl;
}

int main(){
    student s1("Shivam",20);
    show_Info(s1);

    return 0;
}