#include<iostream>
using namespace std;
int main() {
    int subj1,subj2,subj3,subj4,subj5,percentage,sum;
    string studentname;
    cout<<"student name"<<endl;
    cin>>studentname;
    cout<<"subj1 marks"<<endl;
    cin>>subj1;
    cout<<"subj2 marks"<<endl;
    cin>>subj2;
    cout<<"subj3 marks"<<endl;
    cin>>subj3;
    cout<<"subj4 marks"<<endl;
    cin>>subj4;
    cout<<"subj5 marks"<<endl;
    cin>>subj5;
    sum=subj1+subj2+subj3+subj4+subj5;
    percentage=sum/500*100;
    cout<<"student name and percentage"<<endl;
    return 0;
}