#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    string color;
    
    int price;  //added later
    int isPrice = 0;
    // Car(string Brand,string Model,string Color){
    //      brand = Brand;
    //      model = Model;
    //      color = Color;
    // }

    Car(string brand,string model,string color){
        this->brand = brand; 
        this->model = model;
        this->color = color;
    }

    Car(string brand,string model,string color,int price){  //overloading constructor
        this->brand = brand; 
        this->model = model;
        this->color = color;
        this->price = price;
        isPrice = 1;
    }

    void display(){
        if(!isPrice){
            cout<<"My car = "<<brand<<endl<<"Model = "<<model<<endl<<"Color = "<<color<<endl;
        }else{
            cout<<"My car = "<<brand<<endl<<"Model = "<<model<<endl<<"Color = "<<color<<endl<<"Price = "<<price<<endl;
        }
    }

}; 

int main(){
    Car c1("BMW","M-Series","Red"/*/,100101*/);
    c1.display();
    cout<<"..............."<<endl;
    Car c2("Toyota","Fortuner","White",500000);
    c2.display();

    return 0;

}
