#include <iostream>
using namespace std;
int main() {
    int x, end;

    // Ask user for the number x
    cout << "Enter a number to print its multiplication table: ";
    cin >> x;

    // Check if x is positive
    if (x<=0) {
        cout << "valid Input." << endl;
    }
    // Ask user for the end of the table
    cout << "Enter the number to end the table: ";
    cin >> end;

    // Invalid value
    if (x<= 0) {
        cout << "Invalid end value" << endl;
    }
    else{
        cout<<"valid end value"<<endl;
    }
        

    // Print multiplication table
    for (int i = 1; i <= end; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}
