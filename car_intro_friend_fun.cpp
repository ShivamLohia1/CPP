#include<iostream>
using namespace std;

class Cars{
    private:
    string brand;
    int price;
    string color;

    friend void set_data(Cars &c,string brand,int price,string color);
    friend void get_data(Cars &c);
};

void set_data(Cars &c,string brand,int price,string color){
    c.brand = brand;c.price = price;c.color = color;
}
void get_data(Cars &c){
    cout << "Brand: " << c.brand << endl;
    cout << "Price: " << c.price << endl;
    cout << "Color: " << c.color << endl;
}

int main(){
    Cars c1;
    set_data(c1,"BMW",2000000,"White");
    get_data(c1);
    return 0;
}