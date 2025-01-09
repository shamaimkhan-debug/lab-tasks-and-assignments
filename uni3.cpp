#include<iostream>
using namespace std;

int main() {
    string name1, name2, name3, name4, name5;
    int obtmarks1, obtmarks2, obtmarks3, obtmarks4, obtmarks5;
    int totalmarks1, totalmarks2, totalmarks3, totalmarks4, totalmarks5;
    short seats = 3;
    short studentenrolled = 0; 
    int totalstudents = 5;

    // student 1
    cout << "Enter student name 1: ";
    cin >> name1;
    cout << "Enter obtained marks of student 1: ";
    cin >> obtmarks1;
    cout << "Enter total marks of student 1: ";
    cin >> totalmarks1;
    float percentage1 = (float(obtmarks1) / totalmarks1) * 100;
    if (percentage1 >= 60 && seats > 0) {
        cout << "Admission granted in Cs" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in Cs" << endl;
    }
    if (percentage1 >= 50 && seats > 0) {
        cout << "Admission granted in slp" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in slp" << endl;
    }

    // student 2
    cout << "Enter student name 2: ";
    cin >> name2;
    cout << "Enter obtained marks of student 2: ";
    cin >> obtmarks2;
    cout << "Enter total marks of student 2: ";
    cin >> totalmarks2;
    float percentage2 = (float(obtmarks2) / totalmarks2) * 100;
    if (percentage2 >= 60 && seats > 0) {
        cout << "Admission granted in Cs" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted" << endl;
    }
    if (percentage2 >= 50 && seats > 0) {
        cout << "Admission granted in slp" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in slp" << endl;
    }

    // student 3
    cout << "Enter student name 3: ";
    cin >> name3;
    cout << "Enter obtained marks of student 3: ";
    cin >> obtmarks3;
    cout << "Enter total marks of student 3: ";
    cin >> totalmarks3;
    float percentage3 = (float(obtmarks3) / totalmarks3) * 100;
    if (percentage3 >= 60 && seats > 0) {
        cout << "Admission granted in Cs" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in Cs" << endl;
    }
    if (percentage3 >= 50 && seats > 0) {
        cout << "Admission granted in slp" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in slp" << endl;
    }


    // student 4
    cout << "Enter student name 4: ";
    cin >> name4;
    cout << "Enter obtained marks of student 4: ";
    cin >> obtmarks4;
    cout << "Enter total marks of student 4: ";
    cin >> totalmarks4;
    float percentage4 = (float(obtmarks4) / totalmarks4) * 100;
    if (percentage4 >= 60 && seats > 0) {
        cout << "Admission granted in Cs" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in Cs" << endl;
    }
    if (percentage4 >= 50 && seats > 0) {
        cout << "Admission granted in slp" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in slp" << endl;
    }

    // student 5
    cout << "Enter student name 5: ";
    cin >> name5;
    cout << "Enter obtained marks of student 5: ";
    cin >> obtmarks5;
    cout << "Enter total marks of student 5: ";
    cin >> totalmarks5;
    float percentage5 = (float(obtmarks5) / totalmarks5) * 100;
    if (percentage5 >= 60 && seats > 0) {
        cout << "Admission granted in Cs" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in Cs" << endl;
    }
    if (percentage5 >= 50 && seats > 0) {
        cout << "Admission granted in slp" << endl;
        seats--;
        studentenrolled++;
    } else {
        cout << "Admission not granted in slp" << endl;
    }
    return 0;
}
