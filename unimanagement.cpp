#include<iostream>
using namespace std;

int main() {
    // Declaring variables
    string adminEmail = "admin@uol.edu.pk";
    string adminPassword = "uol123";
    string studentName, cnic, phoneNumber;
    short availableSeatCs = 3, availableSeatSLP = 3;
    short Marks;
    float minimumCriteriaProgram1 = 60;
    float minimumCriteriaProgram2 = 50;
    int option;

    cout << "University Management System" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Apply as a Student" << endl;
    cout << "3. Log Out" << endl;
    cout << "Enter your option (1, 2, or 3): ";
    cin >> option;

    if (option == 1) {
        // Admin login workflow
        string adminClaimedEmail, adminClaimedPassword;
        cout << "Enter admin email: ";
        cin >> adminClaimedEmail;
        cout << "Enter admin password: ";
        cin >> adminClaimedPassword;

        if (adminClaimedEmail == adminEmail && adminClaimedPassword == adminPassword) {
            cout << "Admin login successful" << endl;
        } else {
            cout << "Admin login failed" << endl;
        }
    } else if (option == 2) {
        // student applications for 5 students
        
        // Student 1
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student CNIC: ";
        cin >> cnic;
        cout << "Enter student phone number: ";
        cin >> phoneNumber;
        cout << "Enter student marks: ";
        cin >> Marks;
        
        cout << "Enter your program preference (1 for CS, 2 for SLP): ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            if (Marks >= minimumCriteriaProgram1 && availableSeatCs > 0) {
                cout << studentName << " admitted to Computer Science" << endl;
                availableSeatCs--;
            } else {
                cout << studentName << " not admitted to Computer Science (Either marks or seats issue)" << endl;
            }
        } else if (choice == 2) {
            if (Marks >= minimumCriteriaProgram2 && availableSeatSLP > 0) {
                cout << studentName << " admitted to SLP" << endl;
                availableSeatSLP--;
            } else {
                cout << studentName << " not admitted to SLP (Either marks or seats issue)" << endl;
            }
        } else {
            cout << "Invalid program choice for student" << studentName << endl;
        }

        // Student 2
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student CNIC: ";
        cin >> cnic;
        cout << "Enter student phone number: ";
        cin >> phoneNumber;
        cout << "Enter student marks: ";
        cin >> Marks;
        
        cout << "Enter your program preference (1 for CS, 2 for SLP): ";
        cin >> choice;

        if (choice == 1) {
            if (Marks >= minimumCriteriaProgram1 && availableSeatCs > 0) {
                cout << studentName << " admitted to Computer Science" << endl;
                availableSeatCs--;
            } else {
                cout << studentName << " not admitted to Computer Science (Either marks or seats issue)" << endl;
            }
        } else if (choice == 2) {
            if (Marks >= minimumCriteriaProgram2 && availableSeatSLP > 0) {
                cout << studentName << " admitted to SLP" << endl;
                availableSeatSLP--;
            } else {
                cout << studentName << " not admitted to SLP (Either marks or seats issue)" << endl;
            }
        } else {
            cout << "Invalid program choice for  student" << studentName << endl;
        }

        // Student 3
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student CNIC: ";
        cin >> cnic;
        cout << "Enter student phone number: ";
        cin >> phoneNumber;
        cout << "Enter student marks: ";
        cin >> Marks;
        
        cout << "Enter your program preference (1 for CS, 2 for SLP): ";
        cin >> choice;

        if (choice == 1) {
            if (Marks >= minimumCriteriaProgram1 && availableSeatCs > 0) {
                cout << studentName << " admitted to Computer Science" << endl;
                availableSeatCs--;
            } else {
                cout << studentName << " not admitted to Computer Science (Either marks or seats issue)" << endl;
            }
        } else if (choice == 2) {
            if (Marks >= minimumCriteriaProgram2 && availableSeatSLP > 0) {
                cout << studentName << " admitted to SLP" << endl;
                availableSeatSLP--;
            } else {
                cout << studentName << " not admitted to SLP (Either marks or seats issue)" << endl;
            }
        } else {
            cout << "Invalid program choice for student "<< endl;
        }

        // Student 4
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student CNIC: ";
        cin >> cnic;
        cout << "Enter student phone number: ";
        cin >> phoneNumber;
        cout << "Enter student marks: ";
        cin >> Marks;
        
        cout << "Enter your program preference (1 for CS, 2 for SLP): ";
        cin >> choice;

        if (choice == 1) {
            if (Marks >= minimumCriteriaProgram1 && availableSeatCs > 0) {
                cout << studentName << " admitted to Computer Science" << endl;
                availableSeatCs--;
            } else {
                cout << studentName << " not admitted to Computer Science (Either marks or seats issue)" << endl;
            }
        } else if (choice == 2) {
            if (Marks >= minimumCriteriaProgram2 && availableSeatSLP > 0) {
                cout << studentName << " admitted to SLP" << endl;
                availableSeatSLP--;
            } else {
                cout << studentName << " not admitted to SLP (Either marks or seats issue)" << endl;
            }
        } else {
            cout << "Invalid program choice for student " << endl;
        }

        // Student 5
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student CNIC: ";
        cin >> cnic;
        cout << "Enter student phone number: ";
        cin >> phoneNumber;
        cout << "Enter student marks: ";
        cin >> Marks;
        
        cout << "Enter your program preference (1 for CS, 2 for SLP): ";
        cin >> choice;

        if (choice == 1) {
            if (Marks >= minimumCriteriaProgram1 && availableSeatCs > 0) {
                cout << studentName << " admitted to Computer Science" << endl;
                availableSeatCs--;
            } else {
                cout << studentName << " not admitted to Computer Science (Either marks or seats issue)" << endl;
            }
        } else if (choice == 2) {
            if (Marks >= minimumCriteriaProgram2 && availableSeatSLP > 0) {
                cout << studentName << " admitted to SLP" << endl;
                availableSeatSLP--;
            } else {
                cout << studentName << " not admitted to SLP (Either marks or seats issue)" << endl;
            }
        } else {
            cout << "Invalid program choice for student" << endl;
        }

    } else {
        cout << "Logging out" << endl;
    }

    return 0;
}
