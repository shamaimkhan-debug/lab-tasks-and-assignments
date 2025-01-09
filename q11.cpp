#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    while (number > 0) {
        int digit = number % 10;         
        reverse = reverse * 10 + digit;  
        number /= 10;                   
    }
    cout << "The reversed number is: " << reverse << endl;

    return 0;
}