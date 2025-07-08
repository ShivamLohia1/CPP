#include<iostream>
using namespace std;

bool isEven(int a) {
    if (a & 1) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int num;
    cin >> num;
    if (isEven(num)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}