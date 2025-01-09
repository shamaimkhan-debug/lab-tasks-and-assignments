#include<iostream>
using namespace std;
int main() {
    string studentname;
    float percentage;
    float income;
    cout<<"enter student name"<<endl;
    cin>>studentname;
    cout<<"enter the percentage"<<endl;
    cin>>percentage;
    cout<<"enter family income"<<endl;
    cin>>income;
    if(percentage>80){
        cout<<"the student is eligible"<<endl;
    }
    else{
        cout<<"the student is not eligible"<<endl;
    }
    if(percentage>90 && income<=100000){
        cout<<"the students gets 50 percent scholarship"<<endl;
    }
    else{
        cout<<"the student do not get scholarship"<<endl;
    }
    return 0;
}