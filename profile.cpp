#include<iostream>
 using namespace std;
int printUserProfile() {
    string name ="Shamaim Khan";
    int age= 19;
    string sap= "70175229";
    int marks=995;
    string address="Johar town lahore";
    string course= "Bscs";
    string institute= "University of lahore";
    string email= "khanshamaim@gmail.com";
    cout<<"my name is"<<name<<"my age is"<<age<<"my sap is"<<sap<<"my marks is"<<marks<<"my address is"<<address<<"my course is"<<course<<"my institute is"<<institute<<"my email is"<<email<<endl;
    return 0;
}
int main() {
    printUserProfile();
    printUserProfile();
    printUserProfile();
    return 0;
}