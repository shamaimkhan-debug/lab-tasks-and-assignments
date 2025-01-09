#include<iostream>
using namespace std;
int main() {
string name1,name2,name3,name4,name5;
int obtmarks1,obtmarks2;obtmarks3,obtmarks4,obtmarks5;
int totalmarks1;totalmarks2,totalmarks3,totalmarks4,totalmarks5;
short seats=5;
short studentenrolled;
int totalstudents=5;
//student1
cout<< "student name1"<<endl;
cin>>name1;
cout<<"obtained marks of student1"<<endl;
cin>>obtmarks1;
cout<<"total marks of student1"<<endl;
cin>>totalmarks1;
float percentage1=(obtmarks1/totalmarks1)*100;
if(percentage1>=60 && seats>0){
    cout<<"Admission granted"<<endl;
    seats--;
    studentenrolled++; 
}
else{
    cout<<"Admission not granted"<<endl;
}
//student2
cout<< "student name2"<<endl;
cin>>name2;
cout<<"obtained marks of student2"<<endl;
cin>>obtmarks2;
cout<<"total marks of student2"<<endl;
cin>>totalmarks2;
float percentage2=(obtmarks2/totalmarks2)*100;
if(percentage1>=60 && seats>0){
    cout<<"Admission granted"<<endl;
    seats--;
    studentenrolled++; 
}
else{
    cout<<"Admission not granted"<<endl;
}
//student3
cout<<"studentname3"<<endl;
cin>>name3;
cout<<"obtained marks of student3"<<endl;
cin>>obtmarks3;
cout<<"total marks of student3"<<endl;
cin>>totalmarks3;
float percentage3=(obtmarks3/totalmarks3)*100;
if(percentage1>=60 && seats>0){
    cout<<"Admission granted"<<endl;
    seats--;
    studentenrolled++; 
}
else{
    cout<<"Admission not granted"<<endl;
}
//student4
cout<<"student name4"<<endl;
cin>>name4;
cout<<"obtained marks of student4"<<endl;
cin>>obtmarks4;
cout<<"total marks of student4"<<endl;
cin>>totalmarks4;
float percentage4=(obtmarks4/totalmarks4)*100;
if(percentage4>=60 && seats>0){
    cout<<"Admission granted"<<endl;
    seats--;
    studentenrolled++; 
}
else{
    cout<<"Admission not granted"<<endl;
}
//student5
cout<<" student name5"<<endl;
cin>>name1;
cout<<"obtained marks of student5"<<endl;
cin>>obtmarks5;
cout<<"total marks of student5"<<endl;
cin>>totalmarks5;
float percentage5=(obtmarks5/totalmarks5)*100;
if(percentage5>=60 && seats>0){
    cout<<"Admission granted"<<endl;
    seats++;
    studentenrolled--; 
}
else{
    cout<<"Admission not granted"<<endl;
}
    return 0;
}
