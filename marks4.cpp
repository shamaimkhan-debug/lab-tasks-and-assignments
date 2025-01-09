#include<iostream>
using namespace std;
int main() {
    //studentinput
    int mathsMarks;
    int englishMarks;
    float percentage;
    cout<<"enter maths marks"<<endl;
    cin>>mathsMarks;
    cout<<"enter english marks"<<endl;
    cin>>englishMarks;
    cout<<"enter percenatge"<<endl;
    cin>>percentage;
    //eligibility verifying
    if(mathsMarks==85 && englishMarks==80 && percentage>=90){
        cout<<"eligible for scholarship"<<endl;
    }
    else{
        cout<<"not eligible for scholarship"<<endl;
    }
    return 0;
}