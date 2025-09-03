#include<iostream>
using namespace std;
class Mobile{
    public:
    string brand;
    float price;
    int battery;

    //constructor: it is fn/method with no return type
    //default constructor:
    Mobile(){
        cout<<"Default constructor called\n";
    }

    //parametorised constructor:
    Mobile(string Brand,float Price,int Battery){
        brand = Brand;
        price = Price;
        battery = Battery;
    }
    void info(){
        cout<<"Brand: "<<brand<<endl<<"Price: "<<price<<endl<<"Battery backup: "<<battery<<endl;
    }
};

int main(){
    // Mobile m1;
    // m1.brand = "Vivo";
    // m1.price = 20000;
    // m1.battery = 4000;
    // m1.info();

    Mobile m2; //using default constructor
    m2.brand = "Samsung";
    m2.price = 50000;
    m2.battery = 6000;
    m2.info();

    Mobile m1("Vivo",22000,5000); //using parametorised constructor
    m1.info();

}
