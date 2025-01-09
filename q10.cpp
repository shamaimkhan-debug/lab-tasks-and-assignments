#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int digit1 = number % 10;
    number = number / 10;
    int digit2 = number % 10;
    number = number / 10;
    int digit3 = number % 10;
    number = number / 10;
    int digit4 = number % 10;
    int sum_of_digits = digit1 + digit2 + digit3 + digit4;
    cout << "The sum of the digits is: " << sum_of_digits << endl;   
    return 0;
}