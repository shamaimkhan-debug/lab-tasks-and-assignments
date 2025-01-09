
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int batch_number = 0;
    int range = 0;
    int sum = 0;
    int remainder = 0;
    
    cout << "Enter batch number: ";
    cin >> batch_number;
    
    while (batch_number > 0) {
        remainder = batch_number % 10;
        sum = sum + remainder;
        batch_number = batch_number / 10;
    }
    
    cout << "Sum of the batch number: " << sum << endl;
    
    if (sum % 3 == 0) {
        cout << "Batch number divisible by 3.\n";
    }
    else {
        cout << "Batch number not divisible by 3.\n";
    }

    return 0;
}