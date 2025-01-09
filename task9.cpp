#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Prompt the user to input a number n
    cout << "Enter a number: ";
    cin >> n;

    // Edge case when n is 0
    if (n == 0) {
        cout << "Sum is 0." << endl;
    } else {
        // Loop through all odd numbers from 1 to n
        for (int i = 1; i <= n; i += 2) {  // Increment by 2 to get odd numbers
            sum += i;  // Add the current odd number to the sum
        }

        // Output the sum of odd numbers
        cout << "Sum of odd numbers between 1 and " << n << " is: " << sum << endl;
    }

    return 0;
}