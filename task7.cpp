#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    // Prompt the user to input a number n
    cout << "Enter a number: ";
    cin >> n;

    // Edge case when n is 0
    if (n == 0) {
        cout << "No numbers to process." << endl;
    } else {
        // Loop through numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            // Check if the number is divisible by 3 using arithmetic
            if (i / 3 * 3 == i) {
                cout << i << " ";  // Print the number divisible by 3
                count++;           // Increment the count
            }
        }
        
        // Output the count of numbers divisible by 3
        cout << endl << "Count: " << count << endl;
    }

    return 0;
}