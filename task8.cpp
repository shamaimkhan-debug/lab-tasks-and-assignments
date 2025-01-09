#include <iostream>
using namespace std;

int main() {
    int number, largest;

    // Prompt the user to input the first number
    cout << "Enter 5 numbers: " << endl;

    // Input the first number and assume it is the largest initially
    cout << "Enter number 1: ";
    cin >> largest;

    // Loop to accept the next 4 numbers and find the largest
    for (int i = 2; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;

        // Compare the current number with the largest number
        if (number > largest) {
            largest = number; // Update largest if current number is greater
        }
    }

    // Output the largest number
    cout << "Largest is " << largest << "." << endl;

    return 0;
}
