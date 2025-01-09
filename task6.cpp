#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Prompt user to enter two numbers a and b
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Calculate the midpoint
    int midpoint = (a + b) / 2;

    // Display the midpoint
    cout << "Compare " << a << " to " << b << " with midpoint " << midpoint << ".\n";

    // Use a while loop to iterate through the range from a to b
    int i = a;
    while (i <= b) {
        // Compare each number with the midpoint
        if (i < midpoint) {
            cout << i << " is less than the midpoint.\n";
        } else if (i > midpoint) {
            cout << i << " is greater than the midpoint.\n";
        } else {
            cout << i << " is equal to the midpoint.\n";
        }
        i++;  // Move to the next number
    }

    return 0;
}