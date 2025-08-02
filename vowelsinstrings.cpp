#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int v = 0, c = 0;

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            v++;
        }
        else if(isalpha(ch)){
            c++;
        }
    }

    cout << "Vowels: " << v << "\nConsonants: " << c;
    return 0;
}