#include<iostream>
using namespace std;

float areaOfCircle(float radius){
    return 3.14 * radius * radius;
}
int main(){
    cout<<"Enter the radius : "<<endl;
    float radius;
    cin>>radius;
    float area = areaOfCircle(radius);
    cout<<"Area of circle is : "<<area<<endl;
    return 0;
}