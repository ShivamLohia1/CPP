// 1) Fibonacci series
// #include <iostream>
// using namespace std;
// int main() {
//     int n, a = 0, b = 1, c;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; ++i) {
//         cout << a << " ";
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     cout << endl;
//     return 0;
// }


// 2) prime number check
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n <= 1) {
//         cout << n << " is not a prime number." << endl;
//         return 0;
//     }
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             cout << n << " is not a prime number." << endl;
//             return 0;
//         }
//     }
//     cout << n << " is a prime number." << endl;
//     return 0;
// }


// 3) Prime number in range

// #include <iostream>
// using namespace std;
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i*i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }
// int main() {
//     int start, end;
//     cout << "Enter the range (start and end): ";
//     cin >> start >> end;

//     cout << "Prime numbers between " << start << " and " << end << " are:\n";
//     for (int i = start; i <= end; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }


// 4) Sum of digits

// #include <iostream>
// using namespace std;
// int sumOfDigits(int num) {
//     num = abs(num); // handle negative numbers
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;  // add the last digit
//         num /= 10;        // remove the last digit
//     }
//     return sum;
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     cout << "Sum of digits: " << sumOfDigits(number) << endl;
//     return 0;
// }


// 5) Count digits

// #include <iostream>
// using namespace std;
// int countDigits(int num) {
//     num = abs(num); // Handle negative numbers
//     if (num == 0) return 1; // Zero has one digit
//     int count = 0;
//     while (num > 0) {
//         num /= 10;
//         count++;
//     }
//     return count;
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     cout << "Number of digits: " << countDigits(number) << endl;
//     return 0;
// }


// 6)Calculator

// #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char op;

//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> num2;

//     switch(op) {
//         case '+':
//             cout << "Result: " << num1 + num2 << endl;
//             break;
//         case '-':
//             cout << "Result: " << num1 - num2 << endl;
//             break;
//         case '*':
//             cout << "Result: " << num1 * num2 << endl;
//             break;
//         case '/':
//             if (num2 != 0)
//                 cout << "Result: " << num1 / num2 << endl;
//             else
//                 cout << "Error: Division by zero!" << endl;
//             break;
//         default:
//             cout << "Error: Invalid operator!" << endl;
//     }
    
//     return 0;
// }


// 7) Factorial

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     cout << "Enter a number: ";
//     cin>>n;
//     int factorial = 1;
//     for(i=1;i<=n;i++){
//         factorial = factorial * i;
//     }
//     cout << "Factorial of " << n << " is " << factorial << endl;
// }     


// 8)compound interest

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double P, R, T, CI;

//     // Input values
//     cout << "Enter Principal amount (P): ";
//     cin >> P;
//     cout << "Enter Rate of interest (R): ";
//     cin >> R;
//     cout << "Enter Time in years (T): ";
//     cin >> T;

//     // Calculating Compound Interest
//     CI = P * (pow((1 + R / 100), T) - 1);

//     // Output result
//     cout << "Compound Interest is: " << CI << endl;

//     return 0;
// }


// 9)Swap of two numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Before swap: a = " << a << ", b = " << b << endl;

//     // Swap using a temporary variable
//     int temp = a;
//     a = b;
//     b = temp;

//     cout << "After swap: a = " << a << ", b = " << b << endl;

//     return 0;
// }


// 10)Swap of two numbers without third variable

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Before swap: a = " << a << ", b = " << b << endl;

//     // Swap without a third variable
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "After swap: a = " << a << ", b = " << b << endl;
//     return 0;
// }


// 11) Greatest

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the three number:"<<endl;
//     cin>>a>>b>>c;
//     if(a>=b && a>=c){
//         cout<<"A is greatest"<<endl;
//     }
//     else if(b>=a && b>=c){
//         cout<<"B is greatest"<<endl;
//     }
//     else{
//         cout<<"C is greatest"<<endl;
        
//     }
// }



