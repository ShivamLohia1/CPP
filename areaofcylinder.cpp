#include<iostream>
using namespace std;
float areaOfCylinder(float radius, float height){
    return 2 * 3.14 * radius * (radius + height);
}
int main(){
    cout << "Enter the radius and height of the cylinder: " << endl;
    float radius, height;
    cin >> radius >> height;
    float area = areaOfCylinder(radius, height);
    cout << "Area of cylinder is: " << area << endl;
    return 0;
}