#include<iostream>
#include<cmath>

using namespace std;

//1. Arithematic op     2.Unit conversion   3. geometry     4. miscellanious

const float PI = 3.14;

float arithmaticOP(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '-': return a-b; 
        case '/': 
        if(b!=0) {
            return (float) a/b;
        }else{
            cout<<"Denominator cannot be 0\n";
            return 0; break;
        }
        case '*': return a*b;
        default: cout<<"Invalid input\n"; return 0;
    }
}

void unitConversion(int a,int n){
    switch(a){
        case 1: cout<<n<<"°C = "<<(n * (9.0/5.0)) + 32<<"°F\n";break;
        case 2: cout<<n<<"°F = "<<(n - 32)*(5.0/9)<<"°C\n"; break;
        case 3: cout<<n<<" Rs = "<<(float) n/85<<" USD\n"; break;
        case 4: cout<<n<<" USD = "<<n*85<<" Rs\n"; break;
        default: cout<<"Invalid input\n"; 
    }
}

void geometry(int a){
    switch(a){
        case 1: 
        int r;
        cout<<"Enter radius: ";
        cin>>r;
        cout<<"Area of circle = "<<PI*r*r<<endl;
        break;

        case 2:
        int l,b;
        cout<<"Enter length: ";
        cin>>l;
        cout<<"Enter breadth: ";
        cin>>b;
        cout<<"Area of rectangle = "<<l*b<<endl;
        break;

        case 3:
        int base,height;
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
        cout<<"Area of triangle = "<<0.5*base*height<<endl;
        break;

        case 4:
        int rc,hc;
        cout<<"Enter radius: ";
        cin>>rc;
        cout<<"Enter height: ";
        cin>>hc;
        cout<<"Volume of cylinder = "<<PI*rc*rc*hc<<endl;
        break;

        case 5:
        int rad;
        cout<<"Enter radius: ";
        cin>>rad;
        cout<<"Volume of sphere = "<<(4.0/3.0)*PI*rad*rad*rad<<endl;
        break;

        default: cout<<"Invalid input\n";
    }
}

void miscellanious(int a,int n){
    switch(a){
        case 1: cout<<"√"<<n<<" = "<<sqrt(n)<<endl; break;

        case 2: 
        int power;
        cout<<"Enter the power: ";
        cin>>power;
        cout<<n<<" to the power "<<power<<" = "<<pow(n,power)<<endl;
        break;

        default: cout<<"Invalid input\n";
    }
}

int main(){
    cout<<"------This is a multipurpose calculator------\n\n";

    do{
        int input;
    cout<<"Enter 1 for Basic Arithmetic operations\nEnter 2 for Unit Conversions\nEnter 3 for Geometric Calculations\nEnter 4 for Miscellaneous\n";
    cout<<"Input: ";
    cin>>input;

    switch(input){
        case 1: 
        int no1,no2; char op;
        cout<<"Enter 1st number: ";
        cin>>no1;
        cout<<"Enter 2nd number: ";
        cin>>no2;
        cout<<"Enter an operator [+,-,/,*]: ";
        cin>>op;
        cout<<no1<<" "<<op<<" "<<no2<<" = "<<arithmaticOP(no1,no2,op)<<endl;

        break;

        case 2:
        int choice,no;
        cout<<"Enter 1 to convert Celcius to Farenheit\nEnter 2 to convert  to Celcius\nEnter 3 to convert INR to USD\nEnter 4 to convert USD to INR\n";
        cout<<"Input: ";
        cin>>choice;
        cout<<"Enter a no you want to convert: ";
        cin>>no;
        unitConversion(choice,no);

        break;

        case 3:
        int geoChoice;
        cout<<"Enter 1 for area of circle\nEnter 2 for area of rectangle\nEnter 3 for area of triangle\nEnter 4 for volume of cylinder\nEnter 5 for volume of sphere\n";
        cout<<"Input: ";
        cin>>geoChoice;
        geometry(geoChoice);

        break;

        case 4:
        int inp,num;
        cout<<"Enter 1 to find square-root\nEnter 2 to find power\n";
        cout<<"Input: ";
        cin>>inp;
        cout<<"Enter a number: ";
        cin>>num;
        miscellanious(inp,num);

        break;

        default: cout<<"Invalid input\n";
    }
    char x;
        cout<<"\n\nDo you want to continue? [y/n]: ";
        cin>>x;

        if(x=='n'|| x=='N') break;
        cout<<"\n\n";
    }while(true);

    cout<<"\nThanks for using this calculator :)\n";
    
    return 0;
}