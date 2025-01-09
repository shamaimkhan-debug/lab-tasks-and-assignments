#include <iostream>
using namespace std;
int main() {
    int operation;
    int n1; cout<<"n1: "; cin>>n1;
    cout << "Enter an operation (1.+, \n 2.-, \n 3.*, \n 4./, \n 5.%): ";
    cin >> operation;
    int n2; cout<<"n2: "; cin>>n2;
       switch (operation) {
        // ctrl + / => comment
        case 1:
            cout << n1+n2 << endl;
            break;
        case 2:
            cout << n1 - n2 << endl;
            break;
        case 3:
            cout << n1 * n2 << endl;
            break;
        case 4:
            cout << n1 / n2 << endl;
            break;
        case 5:
            cout << n1 % n2 << endl;
            break;
        default:
            cout << "Invalid operations!" << endl;
    }
    return 0;
}


